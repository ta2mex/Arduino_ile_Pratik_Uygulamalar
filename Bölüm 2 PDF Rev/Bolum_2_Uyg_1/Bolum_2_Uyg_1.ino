const int led = 11;
        const int ileriBut = 6;
        const int geriBut = 7;
        int degPWM = 10;
        void setup() {
        pinMode(led,OUTPUT);
          pinMode(ileriBut, INPUT);
          pinMode(geriBut, INPUT);
      }
      void loop() {
        if(digitalRead(ileriBut)){
              while(digitalRead(ileriBut)){
      };
      degPWM += 10;
              analogWrite(led,degPWM);
      }
      if(degPWM==250)
              degPWM=10;
            if(digitalRead(geriBut)) {
      while(digitalRead(geriBut)){
      };
      degPWM -= 10;
              analogWrite(led,degPWM);}
      if(degPWM==0)
              degPWM=240;}
