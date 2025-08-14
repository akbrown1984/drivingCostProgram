Function DrivingCost(float drivenMiles, float milesPerGallon, float dollarsPerGallon) returns float costMiles
   costMiles = drivenMiles * (1.0 / milesPerGallon) * dollarsPerGallon
   return costMiles

Function Main() returns nothing
   float milesPerGallon
   float dollarsPerGallon

   milesPerGallon = Get next input
   dollarsPerGallon = Get next input

   Put DrivingCost(10.0, milesPerGallon, dollarsPerGallon) to output with 2 decimal places
   Put " " to output
   Put DrivingCost(50.0, milesPerGallon, dollarsPerGallon) to output with 2 decimal places
   Put " " to output
   Put DrivingCost(400.0, milesPerGallon, dollarsPerGallon) to output with 2 decimal places
