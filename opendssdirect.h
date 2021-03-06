typedef double DOUBLE;
typedef int INTEGER;
typedef int32_t LONGINT;
typedef uint32_t LONGWORD;
typedef uint64_t NATIVEUINT;
typedef char * PANSICHAR;
typedef void * PCOMPLEXARRAY;
typedef void * PINTEGERARRAY;
typedef void * PNODEVARRAY;
typedef void * VARIANT;
typedef void VOID;

LONGINT ActiveClassI(LONGINT mode, LONGINT arg);
PANSICHAR ActiveClassS(LONGINT mode, PANSICHAR arg);
VOID ActiveClassV(LONGINT mode, VARIANT arg);
LONGINT BUSI(LONGINT mode, LONGINT arg);
DOUBLE BUSF(LONGINT mode, DOUBLE arg);
PANSICHAR BUSS(LONGINT mode, PANSICHAR arg);
VOID BUSV(LONGINT mode, VARIANT arg);
LONGINT CapacitorsI(LONGINT mode, LONGINT arg);
DOUBLE CapacitorsF(LONGINT mode, DOUBLE arg);
PANSICHAR CapacitorsS(LONGINT mode, PANSICHAR arg);
VOID CapacitorsV(LONGINT mode, VARIANT arg);
LONGINT CapControlsI(LONGINT mode, LONGINT arg);
DOUBLE CapControlsF(LONGINT mode, DOUBLE arg);
PANSICHAR CapControlsS(LONGINT mode, PANSICHAR arg);
VOID CapControlsV(LONGINT mode, VARIANT arg);
LONGINT CircuitI(LONGINT mode, LONGINT arg);
DOUBLE CircuitF(LONGINT mode, DOUBLE arg1, DOUBLE arg2);
PANSICHAR CircuitS(LONGINT mode, PANSICHAR arg);
VOID CircuitV(LONGINT mode, VARIANT arg, LONGINT arg2);
LONGINT CktElementI(LONGINT mode, LONGINT arg);
DOUBLE CktElementF(LONGINT mode, DOUBLE arg);
PANSICHAR CktElementS(LONGINT mode, PANSICHAR arg);
VOID CktElementV(LONGINT mode, VARIANT arg);
DOUBLE CmathLibF(LONGINT mode, DOUBLE arg1, DOUBLE arg2);
VOID CmathLibV(LONGINT mode, DOUBLE realpart, DOUBLE imagpart, VARIANT arg);
LONGINT DSSI(LONGINT mode, LONGINT arg);
PANSICHAR DSSS(LONGINT mode, PANSICHAR arg);
VOID DSSV(LONGINT mode, VARIANT arg);
LONGINT DSSElementI(LONGINT mode, LONGINT arg);
PANSICHAR DSSElementS(LONGINT mode, PANSICHAR arg);
VOID DSSElementV(LONGINT mode, VARIANT arg);
LONGINT DSSExecutiveI(LONGINT mode, LONGINT arg);
PANSICHAR DSSExecutiveS(LONGINT mode, PANSICHAR arg);
LONGINT ErrorCode();
LONGINT FusesI(LONGINT mode, LONGINT arg);
DOUBLE FusesF(LONGINT mode, DOUBLE arg);
PANSICHAR FusesS(LONGINT mode, PANSICHAR arg);
VOID FusesV(LONGINT mode, VARIANT arg);
LONGINT GeneratorsI(LONGINT mode, LONGINT arg);
DOUBLE GeneratorsF(LONGINT mode, DOUBLE arg);
PANSICHAR GeneratorsS(LONGINT mode, PANSICHAR arg);
VOID GeneratorsV(LONGINT mode, VARIANT arg);
PANSICHAR DSSProperties(LONGINT mode, PANSICHAR arg);
LONGINT IsourceI(LONGINT mode, LONGINT arg);
DOUBLE IsourceF(LONGINT mode, DOUBLE arg);
PANSICHAR IsourceS(LONGINT mode, PANSICHAR arg);
VOID IsourceV(LONGINT mode, VARIANT arg);
LONGINT LinesI(LONGINT mode, LONGINT arg);
DOUBLE LinesF(LONGINT mode, DOUBLE arg);
PANSICHAR LinesS(LONGINT mode, PANSICHAR arg);
VOID LinesV(LONGINT mode, VARIANT arg);
LONGINT DSSLoads(LONGINT mode, LONGINT arg);
DOUBLE DSSLoadsF(LONGINT mode, DOUBLE arg);
PANSICHAR DSSLoadsS(LONGINT mode, PANSICHAR arg);
VOID DSSLoadsV(LONGINT mode, VARIANT arg);
LONGINT LoadShapeI(LONGINT mode, LONGINT arg);
DOUBLE LoadShapeF(LONGINT mode, DOUBLE arg);
PANSICHAR LoadShapeS(LONGINT mode, PANSICHAR arg);
VOID LoadShapeV(LONGINT mode, VARIANT arg);
LONGINT MetersI(LONGINT mode, LONGINT arg);
DOUBLE MetersF(LONGINT mode, DOUBLE arg);
PANSICHAR MetersS(LONGINT mode, PANSICHAR arg);
VOID MetersV(LONGINT mode, VARIANT arg);
LONGINT MonitorsI(LONGINT mode, LONGINT arg);
PANSICHAR MonitorsS(LONGINT mode, PANSICHAR arg);
VOID MonitorsV(LONGINT mode, VARIANT arg);
LONGINT ParserI(LONGINT mode, LONGINT arg);
DOUBLE ParserF(LONGINT mode, DOUBLE arg);
PANSICHAR ParserS(LONGINT mode, PANSICHAR arg);
VOID ParserV(LONGINT mode, VARIANT arg);
LONGINT PDElementsI(LONGINT mode, LONGINT arg);
DOUBLE PDElementsF(LONGINT mode, DOUBLE arg);
PANSICHAR PDElementsS(LONGINT mode, PANSICHAR arg);
LONGINT PVsystemsI(LONGINT mode, LONGINT arg);
DOUBLE PVsystemsF(LONGINT mode, DOUBLE arg);
PANSICHAR PVsystemsS(LONGINT mode, PANSICHAR arg);
VOID PVsystemsV(LONGINT mode, VARIANT arg);
LONGINT ReclosersI(LONGINT mode, LONGINT arg);
DOUBLE ReclosersF(LONGINT mode, DOUBLE arg);
PANSICHAR ReclosersS(LONGINT mode, PANSICHAR arg);
VOID ReclosersV(LONGINT mode, VARIANT arg);
LONGINT RegControlsI(LONGINT mode, LONGINT arg);
DOUBLE RegControlsF(LONGINT mode, DOUBLE arg);
PANSICHAR RegControlsS(LONGINT mode, PANSICHAR arg);
VOID RegControlsV(LONGINT mode, VARIANT arg);
LONGINT RelaysI(LONGINT mode, LONGINT arg);
PANSICHAR RelaysS(LONGINT mode, PANSICHAR arg);
VOID RelaysV(LONGINT mode, VARIANT arg);
LONGINT SensorsI(LONGINT mode, LONGINT arg);
DOUBLE SensorsF(LONGINT mode, DOUBLE arg);
PANSICHAR SensorsS(LONGINT mode, PANSICHAR arg);
VOID SensorsV(LONGINT mode, VARIANT arg);
LONGINT SettingsI(LONGINT mode, LONGINT arg);
DOUBLE SettingsF(LONGINT mode, DOUBLE arg);
PANSICHAR SettingsS(LONGINT mode, PANSICHAR arg);
VOID SettingsV(LONGINT mode, VARIANT arg);
LONGINT SolutionI(LONGINT mode, LONGINT arg);
DOUBLE SolutionF(LONGINT mode, DOUBLE arg);
PANSICHAR SolutionS(LONGINT mode, PANSICHAR arg);
VOID SolutionV(LONGINT mode, VARIANT arg);
LONGINT SwtControlsI(LONGINT mode, LONGINT arg);
DOUBLE SwtControlsF(LONGINT mode, DOUBLE arg);
PANSICHAR SwtControlsS(LONGINT mode, PANSICHAR arg);
VOID SwtControlsV(LONGINT mode, VARIANT arg);
PANSICHAR DSSPut_Command(PANSICHAR a);
LONGINT TopologyI(LONGINT mode, LONGINT arg);
PANSICHAR TopologyS(LONGINT mode, PANSICHAR arg);
VOID TopologyV(LONGINT mode, VARIANT arg);
LONGINT TransformersI(LONGINT mode, LONGINT arg);
DOUBLE TransformersF(LONGINT mode, DOUBLE arg);
PANSICHAR TransformersS(LONGINT mode, PANSICHAR arg);
VOID TransformersV(LONGINT mode, VARIANT arg);
LONGINT VsourcesI(LONGINT mode, LONGINT arg);
DOUBLE VsourcesF(LONGINT mode, DOUBLE arg);
PANSICHAR VsourcesS(LONGINT mode, PANSICHAR arg);
VOID VsourcesV(LONGINT mode, VARIANT arg);
LONGINT XYCurvesI(LONGINT mode, LONGINT arg);
DOUBLE XYCurvesF(LONGINT mode, DOUBLE arg);
PANSICHAR XYCurvesS(LONGINT mode, PANSICHAR arg);
VOID XYCurvesV(LONGINT mode, VARIANT arg);
LONGWORD InitAndGetYparams(NATIVEUINT hy, LONGWORD nbus, LONGWORD nnz);
VOID GetCompressedYMatrix(NATIVEUINT hy, LONGWORD nbus, LONGWORD nnz, PINTEGERARRAY colptr, PINTEGERARRAY rowidx, PCOMPLEXARRAY cvals);
VOID ZeroInjCurr();
VOID GetSourceInjCurrents();
VOID GetPCInjCurr();
LONGINT SystemYChanged(LONGINT mode, LONGINT arg);
VOID BuildYMatrixD(LONGINT buildops, LONGINT allocatevi);
LONGINT UseAuxCurrents(LONGINT mode, LONGINT arg);
VOID AddInAuxCurrents(INTEGER stype);
VOID getIpointer(PNODEVARRAY ivectorptr);
VOID getVpointer(PNODEVARRAY vvectorptr);