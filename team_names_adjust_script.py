team_count = 66
team_names = []
with open('team_names.txt', 'r') as team_names_file:
    for i in range(team_count + 1):
        team_name = team_names_file.readline().strip()
        team_names.append(team_name)
teams = []
with open('teams.txt', 'r') as w_file:
    for i in range(team_count + 1):
        line = w_file.readline().split()
        teams.append(line)
for i in range(1, team_count + 1):
    teams[i][2] = team_names[i]
with open('teams.txt', 'w') as teams_file:
    for team in teams:
        for el in team:
            teams_file.write(f"{el}\t")
        teams_file.write("\n")
