#include "CWE_119.h"
#include "CWE_120.h"
#include "CWE_121.h"
#include "CWE_122.h"
#include "CWE_124.h"
#include "CWE_125.h"
#include "CWE_126.h"
#include "CWE_129.h"
#include "CWE_130.h"
#include "CWE_131.h"
#include "CWE_190.h"
#include "CWE_191.h"
#include "CWE_192.h"
#include "CWE_193.h"
#include "CWE_194.h"
#include "CWE_195.h"
#include "CWE_196.h"
#include "CWE_197.h"
#include "CWE_234.h"
#include "CWE_242.h"
#include "CWE_252.h"
#include "CWE_253.h"
#include "CWE_369.h"
#include "CWE_391.h"
#include "CWE_393.h"
#include "CWE_400.h"
#include "CWE_401.h"
#include "CWE_404.h"
#include "CWE_415.h"
#include "CWE_416.h"
#include "CWE_456.h"
#include "CWE_457.h"
#include "CWE_459.h"
#include "CWE_467.h"
#include "CWE_468.h"
#include "CWE_469.h"
#include "CWE_476.h"
#include "CWE_478.h"
#include "CWE_480.h"
#include "CWE_481.h"
#include "CWE_482.h"
#include "CWE_483.h"
#include "CWE_484.h"
#include "CWE_561.h"
#include "CWE_562.h"
#include "CWE_563.h"
#include "CWE_570.h"
#include "CWE_571.h"
#include "CWE_587.h"
#include "CWE_588.h"
#include "CWE_590.h"
#include "CWE_605.h"
#include "CWE_606.h"
#include "CWE_665.h"
#include "CWE_670.h"
#include "CWE_672.h"
#include "CWE_676.h"
#include "CWE_680.h"
#include "CWE_681.h"
#include "CWE_682.h"
#include "CWE_685.h"
#include "CWE_686.h"
#include "CWE_688.h"
#include "CWE_690.h"
#include "CWE_704.h"
#include "CWE_787.h"
#include "CWE_788.h"
#include "CWE_789.h"
#include "CWE_805.h"
#include "CWE_806.h"
#include "CWE_824.h"
#include "CWE_835.h"
#include "CWE_843.h"
#include "CWE_1335.h"

#include "CWE_134.h"
#include "CWE_170.h"
#include "CWE_176.h"
#include "CWE_188.h"
#include "CWE_20.h"
#include "CWE_674.h"
#include "CWE_761.h"

int main(void) {
    CWE_119_BufferOverflow("test input");
    CWE_120_BufferOverflow();
    CWE_121_StackBasedOverflow();
    CWE_122_HeapBasedOverflow();
    CWE_124_BufferUnderwrite();
    CWE_125_OutOfBoundsRead();
    CWE_126_BufferOverread();
    CWE_129_ImproperValidationOfArrayIndex();
    CWE_130_ImproperHandlingOfLengthParameter();
    CWE_131_IncorrectCalculationOfBufferSize();
    CWE_190_IntegerOverflow();
    CWE_191_IntegerUnderflow();
    CWE_192_IntegerCoercionError();
    CWE_193_OffByOneError();
    CWE_194_UnexpectedSignExtension();
    CWE_195_SignedToUnsignedConversionError();
    CWE_196_UnsignedToSignedConversionError();
    CWE_197_NumericTruncationError();
    CWE_234_MissingParameter();
    CWE_242_UseOfDangerousFunction();
    CWE_252_UncheckedReturnValue();
    CWE_253_IncorrectCheckOfFunctionReturnValue();
    CWE_369_DivideByZeroError();
    CWE_391_UncheckedErrorCondition();
    CWE_393_ReturningIncorrectStatus();
    CWE_400_UncontrolledResourceConsumption();
    CWE_401_ImproperMemoryRelease();
    CWE_404_ImproperResourceShutdown();
    CWE_415_DoubleFree();
    CWE_416_UseAfterFree();
    CWE_456_UninitializedVariable();
    CWE_457_UseOfUninitializedVariable();
    CWE_459_IncompleteCleanup();
    CWE_467_UseOfSizeofOnPointer();
    CWE_468_IncorrectPointerScaling();
    CWE_469_UseOfPointerSubtractionToDetermineSize();
    CWE_476_DereferenceOfNullPointer();
    CWE_478_MissingDefaultCaseInSwitch();
    CWE_480_IncorrectOperatorUsage();
    CWE_481_IncorrectAssignmentInCondition();
    CWE_482_IncorrectUseOfAssignmentOperator();
    CWE_483_IncorrectBlockDelimitation();
    CWE_484_OmissionOfBreakInSwitch();
    CWE_561_DeadCode();
    CWE_562_ReturnOfStackVariableAddress();
    CWE_563_UnusedVariableAfterAssignment();
    CWE_570_ExpressionAlwaysFalse();
    CWE_571_ExpressionAlwaysTrue();
    CWE_587_AssigningFixedAddressToPointer();
    CWE_588_AccessToNonStructPointerField();
    CWE_590_FreeNonHeapMemory();
    CWE_605_MultipleBindingsToSamePort();
    CWE_606_UncheckedLoopCondition();
    CWE_665_ImproperInitialization();
    CWE_670_IncorrectControlFlowImplementation();
    CWE_672_UseOfFreedResource();
    CWE_676_UseOfPotentiallyDangerousFunction();
    CWE_680_IntegerOverflowToBufferOverflow();
    CWE_681_IncorrectTypeConversion();
    CWE_682_IncorrectCalculation();
    CWE_685_IncorrectNumberOfArguments();
    CWE_686_IncorrectArgumentType();
    CWE_688_IncorrectVariableAsFunctionArgument();
    CWE_690_UncheckedReturnValueToNullPointer();
    CWE_704_IncorrectTypeConversion();
    CWE787_OutOfBoundsWrite();
    CWE788_HostLookup("127.0.0.1");
    CWE789_UncontrolledMemoryAllocation();
    CWE805_BufferAccessWithIncorrectLength();
    CWE806_BufferAccessUsingSourceSize();
    CWE824_UninitializedPointer();
    CWE835_ProcessMessagesFromServer("127.0.0.1", 8080);
    CWE843_TypeConfusion();
	CWE_1335_IncorrectBitwiseShift();

    CWE134_Function();
    CWE170_ImproperNullTermination();
    CWE176_ImproperHandlingOfUnicode();
    CWE188_RelianceOnDataMemoryLayout();
    CWE20_ImproperInputValidation();
    CWE674_UncontrolledRecursion(1);
    CWE761_ContainsChar('a');

    return 0;
}
