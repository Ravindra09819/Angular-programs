using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading.Tasks;

namespace FootaballMatch
{
    public class Team
    {
        public string team;
        public int MP;
        public int W;
        public int D;
        public int L;
        public int P;
        public Team(string team) {
            this.team=team;        
            MP=0;
            W=0;
            D=0;
            L=0;
            P=0;
        }
    }
    public class Matches { 
        public List<Team> teams=new List<Team>();
        public void add(Team t) {
            teams.Add(t);
        }
        public void update(int i,string result,int p=0) {
            teams[i].MP++;
            if (p == 0 && result == "win")            
                teams[i].W++;            
            else if (p == 1 && result == "win")            
                teams[i].L++;            
            else if (p == 0 && result == "loss")            
                teams[i].L++;            
            else if (p == 1 && result == "loss")            
                teams[i].L++;            
            else             
                teams[i].D++;
        }
        public int find(string team) {
            return teams.FindIndex(t=>t.team==team);
        }
        public void show() {
            Console.WriteLine("Teams\t\t\t | MP | W | D | L | P");
            foreach (Team t in teams) {
                t.P = t.W * 3 + t.D;
                Console.WriteLine(t.team+"\t | "+t.MP+" | "+t.W+" | "+t.D+" | "+t.L+" | "+t.P);
            }
        }
        public void sort() {
            Team t;
            //sorting alphabetically
            for (int i = 0; i < teams.Count; i++) {
                for (int j = 0; j < teams.Count; j++) {
                    if (teams[i].P > teams[j].P) {
                        t = teams[i];
                        teams[i] = teams[j];
                        teams[j] = t;
                    }
                    else if (teams[i].P==teams[j].P) {
                        t = teams[j];
                        teams[i] = teams[j];
                        teams[j] = t;
                    }
                }
            }
        }
    }
    internal class Program {
        static void Main(String[] args) {
            String path = @"InputFile.txt";
            
            if (!File.Exists(path)) {
                Console.WriteLine("File not found!");
                Environment.Exit(0);
            }
            string[] input=File.ReadAllLines(path);

            string[] split = new string[3];
            Matches matches=new Matches();

            for (int i = 0; i < input.Length; i++) {
                split = input[i].Split(';');
                split[0] = split[0].Trim();
                split[1] = split[1].Trim();
                split[2] = split[2].Trim();

                if (matches.find(split[0]) == 1) {
                    Team t = new Team(split[0]);
                    matches.add(t);
                }
                if (matches.find(split[1]) == -1) { 
                    Team t=new Team(split[1]);
                    matches.add(t);
                }

                matches.update(matches.find(split[0]), split[2]);
                matches.update(matches.find(split[1]), split[2],1);
            }
            Console.Write("Without sorting: \n");
            matches.show();
            Console.WriteLine("\n After sorting:");
            matches.sort();
            matches.show();
            Console.ReadKey();
        }
    }
}
