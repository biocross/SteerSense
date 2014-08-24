#include<stdio.h>
#include<math.h>

static float arr[591] = { 33.050190, 32.880421, 32.711620, 32.543781, 32.376896, 32.210964, 32.045975, 31.881926, 31.718811, 31.556625, 31.395363, 31.235020, 31.075590, 30.917067, 30.759447, 30.602726, 30.446898, 30.291956, 30.137896, 29.984715, 29.832405, 29.680964, 29.530384, 29.380661, 29.231792, 29.083771, 28.936592, 28.790253, 28.644747, 28.500069, 28.356215, 28.213181, 28.070959, 27.929550, 27.788946, 27.649141, 27.510134, 27.371918, 27.234489, 27.097843, 26.961975, 26.826881, 26.692556, 26.558998, 26.426199, 26.294155, 26.162865, 26.032322, 25.902523, 25.773462, 25.645138, 25.517544, 25.390676, 25.264532, 25.139105, 25.014393, 24.890390, 24.767096, 24.644501, 24.522606, 24.401405, 24.280893, 24.161070, 24.041927, 23.923464, 23.805676, 23.688559, 23.572107, 23.456320, 23.341190, 23.226719, 23.112898, 22.999725, 22.887197, 22.775311, 22.664061, 22.553446, 22.443459, 22.334099, 22.225363, 22.117245, 22.009743, 21.902853, 21.796574, 21.690897, 21.585823, 21.481348, 21.377468, 21.274179, 21.171480, 21.069365, 20.967831, 20.866875, 20.766495, 20.666685, 20.567446, 20.468769, 20.370657, 20.273102, 20.176104, 20.079657, 19.983759, 19.888409, 19.793600, 19.699333, 19.605602, 19.512405, 19.419739, 19.327599, 19.235985, 19.144894, 19.054319, 18.964262, 18.874718, 18.785683, 18.697155, 18.609133, 18.521610, 18.434587, 18.348059, 18.262024, 18.176479, 18.091421, 18.006847, 17.922754, 17.839142, 17.756006, 17.673342, 17.591150, 17.509426, 17.428167, 17.347370, 17.267035, 17.187157, 17.107733, 17.028761, 16.950241, 16.872166, 16.794537, 16.717350, 16.640602, 16.564291, 16.488415, 16.412971, 16.337957, 16.263371, 16.189207, 16.115467, 16.042149, 15.969246, 15.896758, 15.824684, 15.753020, 15.681765, 15.610915, 15.540468, 15.470424, 15.400778, 15.331528, 15.262672, 15.194210, 15.126137, 15.058452, 14.991152, 14.924235, 14.857699, 14.791543, 14.725763, 14.660358, 14.595325, 14.530663, 14.466370, 14.402442, 14.338879, 14.275677, 14.212835, 14.150352, 14.088223, 14.026449, 13.965027, 13.903955, 13.843229, 13.782851, 13.722816, 13.663123, 13.603770, 13.544755, 13.486076, 13.427732, 13.369719, 13.312037, 13.254683, 13.197657, 13.140955, 13.084576, 13.028518, 12.972778, 12.917357, 12.862251, 12.807460, 12.752980, 12.698811, 12.644950, 12.591395, 12.538146, 12.485200, 12.432556, 12.380211, 12.328165, 12.276415, 12.224959, 12.173798, 12.122927, 12.072345, 12.022052, 11.972046, 11.922324, 11.872885, 11.823728, 11.774851, 11.726253, 11.677930, 11.629884, 11.582110, 11.534609, 11.487379, 11.440417, 11.393723, 11.347295, 11.301131, 11.255231, 11.209591, 11.164212, 11.119091, 11.074226, 11.029618, 10.985264, 10.941162, 10.897311, 10.853710, 10.810358, 10.767252, 10.724392, 10.681776, 10.639402, 10.597271, 10.555379, 10.513725, 10.472309, 10.431129, 10.390182, 10.349470, 10.308990, 10.268739, 10.228718, 10.188925, 10.149359, 10.110018, 10.070901, 10.032006, 9.993334, 9.954881, 9.916648, 9.878632, 9.840833, 9.803248, 9.765879, 9.728722, 9.691776, 9.655042, 9.618516, 9.582198, 9.546087, 9.510181, 9.474481, 9.438983, 9.403688, 9.368594, 9.333699, 9.299004, 9.264505, 9.230205, 9.196098, 9.162186, 9.128467, 9.094940, 9.061604, 9.028459, 8.995502, 8.962731, 8.930149, 8.897752, 8.865539, 8.833509, 8.801662, 8.769997, 8.738512, 8.707206, 8.676078, 8.645128, 8.614354, 8.583755, 8.553330, 8.523080, 8.493000, 8.463093, 8.433355, 8.403788, 8.374388, 8.345156, 8.316091, 8.287190, 8.258455, 8.229883, 8.201474, 8.173226, 8.145141, 8.117214, 8.089446, 8.061837, 8.034385, 8.007090, 7.979949, 7.952964, 7.926132, 7.899453, 7.872925, 7.846549, 7.820323, 7.794247, 7.768319, 7.742538, 7.716905, 7.691417, 7.666075, 7.640877, 7.615822, 7.590910, 7.566141, 7.541512, 7.517023, 7.492674, 7.468463, 7.444391, 7.420455, 7.396657, 7.372993, 7.349464, 7.326069, 7.302807, 7.279678, 7.256681, 7.233815, 7.211079, 7.188472, 7.165994, 7.143644, 7.121421, 7.099325, 7.077355, 7.055510, 7.033789, 7.012192, 6.990718, 6.969367, 6.948136, 6.927027, 6.906038, 6.885169, 6.864419, 6.843786, 6.823271, 6.802873, 6.782591, 6.762425, 6.742373, 6.722436, 6.702612, 6.682902, 6.663303, 6.643816, 6.624440, 6.605175, 6.586019, 6.566972, 6.548034, 6.529203, 6.510480, 6.491863, 6.473353, 6.454948, 6.436647, 6.418451, 6.400359, 6.382370, 6.364483, 6.346697, 6.329014, 6.311431, 6.293948, 6.276565, 6.259280, 6.242094, 6.225006, 6.208015, 6.191122, 6.174324, 6.157622, 6.141015, 6.124502, 6.108084, 6.091759, 6.075528, 6.059388, 6.043341, 6.027384, 6.011519, 5.995745, 5.980060, 5.964464, 5.948957, 5.933538, 5.918208, 5.902964, 5.887808, 5.872737, 5.857753, 5.842854, 5.828040, 5.813310, 5.798664, 5.784101, 5.769622, 5.755225, 5.740909, 5.726676, 5.712523, 5.698451, 5.684459, 5.670547, 5.656714, 5.642960, 5.629284, 5.615686, 5.602166, 5.588723, 5.575356, 5.562065, 5.548850, 5.535710, 5.522645, 5.509655, 5.496738, 5.483895, 5.471125, 5.458428, 5.445803, 5.433250, 5.420769, 5.408359, 5.396019, 5.383749, 5.371550, 5.359420, 5.347359, 5.335367, 5.323443, 5.311587, 5.299798, 5.288077, 5.276422, 5.264834, 5.253312, 5.241855, 5.230464, 5.219137, 5.207875, 5.196678, 5.185544, 5.174473, 5.163465, 5.152520, 5.141638, 5.130817, 5.120058, 5.109360, 5.098723, 5.088147, 5.077631, 5.067175, 5.056779, 5.046442, 5.036163, 5.025943, 5.015781, 5.005678, 4.995631, 4.985642, 4.975710, 4.965835, 4.956015, 4.946252, 4.936544, 4.926891, 4.917294, 4.907751, 4.898263, 4.888828, 4.879447, 4.870120, 4.860846, 4.851624, 4.842455, 4.833339, 4.824274, 4.815261, 4.806299, 4.797388, 4.788528, 4.779719, 4.770959, 4.762250, 4.753590, 4.744979, 4.736418, 4.727905, 4.719441, 4.711025, 4.702657, 4.694336, 4.686063, 4.677837, 4.669658, 4.661526, 4.653439, 4.645399, 4.637405, 4.629456, 4.621552, 4.613694, 4.605880, 4.598111, 4.590385, 4.582705, 4.575067, 4.567473, 4.559923, 4.552415, 4.544950, 4.537528, 4.530148, 4.522810, 4.515514, 4.508259, 4.501046, 4.493874, 4.486742, 4.479651, 4.472601, 4.465591, 4.458621, 4.451690, 4.444799, 4.437947, 4.431134, 4.424360, 4.417624, 4.410927, 4.404268, 4.397647, 4.391064, 4.384518, 4.378010, 4.371538, 4.365103, 4.358706, 4.352344, 4.346018, 4.339729, 4.333476, 4.327258, 4.321075, 4.314928, 4.308816, 4.302739, 4.296696, 4.290687, 4.284713, 4.278773, 4.272867, 4.266994 };

float carBreadth = 70.65;
int carLength = 292;

int getValidAngle(char, int, int , int);
float getObstacleCoordinateX(int, int);
float getObstacleCoordinateY(int);
float getRValue(int, int);
int getSteeringAngle(float);

int clearance = 50;


int main()
{
		printf("\nWelcome!");
		for(int i=0; i<250; i++){
			printf("\nFor %d is %d", i, getValidAngle('R', i, 26, 21));
			i=i+9;
		}
		

		return 0;
}

int getValidAngle(char side, int a, int b, int c){
	if(side == 'L'){

	}
	else{

			return getSteeringAngle(getRValue(getObstacleCoordinateX(4, a), getObstacleCoordinateY(4)));

		
		/*
		else if(a > clearance && b < clearance && c < clearance){
			return getSteeringAngle(getRValue(getObstacleCoordinateX(5, b), getObstacleCoordinateY(5)));
		}
		else{
			return getSteeringAngle(getRValue(getObstacleCoordinateX(6, c), getObstacleCoordinateY(6)));
		}*/
		
	}
}


float getObstacleCoordinateX(int sensorNumber, int distance){
	if(sensorNumber < 4){
		return -((carBreadth) + distance);
	}
	else{
		return ((carBreadth) + distance);
	}
}

float getObstacleCoordinateY(int sensorNumber){
	switch(sensorNumber){
		case 4:
			return 300;
			break;
		case 5: 
			return 70;
			break;
		case 6:
			return 36.83;
			break;
		default:
			return -1;
			break;
	}
}

float getRValue(int x, int y){
	//float r = (((x*x)+(y*y))/(2*x));
	float R = (((x*x) + (y*y) - 4923.127)/(2*(x-70.165))) + 0.3;
	return R/100; //Conversion to meters
}

int getSteeringAngle(float R){
	int angle = 1;
	
	//printf("\nR is %f", R);

	if(R > arr[0]){
		printf("R is greater than first value!\n");
	}
	
	if(R < 4.266){
		angle  = 590;
	}
	
	
		for(int i=0; i<590 ; i++){
		if(R < arr[i] && R > arr[i+1]){
			angle = i;
		}
	}
	
	
	return angle;
}