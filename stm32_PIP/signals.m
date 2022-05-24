p_SignalC1 = Simulink.Signal;
p_SignalC1.DataType = 'double';
p_SignalC1.Dimensions = [1];
p_SignalC1.Complexity = 'real';
p_SignalC1.InitialValue = num2str(p);
p_SignalC1.StorageClass = 'ImportedExtern';

p_SignalC21 = Simulink.Signal;
p_SignalC21.DataType = 'double';
p_SignalC21.Dimensions = 2;
p_SignalC21.InitialValue = ['10','20'];
p_SignalC21.Complexity = 'real';
p_SignalC21.StorageClass = 'ImportedExtern';

p_SignalC3 = Simulink.Signal;
p_SignalC3.DataType = 'double';
p_SignalC3.Dimensions = [2];
p_SignalC3.InitialValue = [num2str(p12_simu),num2str(p22_simu)];
p_SignalC3.Complexity = 'real';
p_SignalC3.StorageClass = 'ImportedExtern';

p_SignalC4 = Simulink.Signal;
p_SignalC4.DataType = 'double';
p_SignalC4.Dimensions = [2];
p_SignalC4.InitialValue = [num2str(p13_simu),num2str(p23_simu)];
p_SignalC4.Complexity = 'real';
p_SignalC4.StorageClass = 'ImportedExtern';

