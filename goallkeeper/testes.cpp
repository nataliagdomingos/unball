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
