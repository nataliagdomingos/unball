if math.sqrt(dist_goal_ball[0]**2 + dist_goal_ball[1]**2) < critical_distance:
    self.robot.vref[0]= -vb[0]
    self.robot.vref[1]= -vb[1]
    
    #ajustar a posição do goleiro coma bola
    self.robot.setSpin(spinGoalKeeper(rb, rr, rg))

if math.sqrt(dist_goal_ball[0]**2 + dist_goal_ball[1]**2) < critical_distance:
    self.robot.vref[0]= -vb[0]
    self.robot.vref[1]= -vb[1]
    
else:
    self.maintainPosition()
    self.trackball()
    
    #ajustar a posição do goleiro coma bola
    self.robot.setSpin(spinGoalKeeper(rb, rr, rg))


 def avoidPlayers(self):
    avoidance_radius = 0.05  # Raio de detecção de colisão
    repulsion_strength = 0.1  # Força de repulsão para desviar dos jogadores

    rr = np.array(self.robot.pos)  # Posição do robô goleiro
    vr = np.array(self.robot.v)  # Velocidade do robô goleiro

    # jogadores adversários
    for player in self.world.opponents:
        rp = np.array(player.pos)  # Posição do jogador adversário
        dist_robot_player = np.linalg.norm(rr - rp)  # Distância entre o robô e o jogador

        
