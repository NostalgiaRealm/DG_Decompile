/*
 * FUN_10088430 at 10088430
 * undefined FUN_10088430(void)
 * Address ranges: 10088430-100884d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088430(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0) {
    if ((param_3 & 0x1800 | param_3 >> 0x14 & 0x700) == 0x300) {
      param_4 = FUN_100883e8();
    }
    else {
      param_4 = FUN_100883a0(param_1,param_2,param_3 & 0x7ff);
    }
  }
  *(int *)(param_2 + 0x330) = param_4;
  *(byte *)(param_2 + 0x334) = (byte)(param_3 >> 0x10) & 0xf;
  *(undefined8 *)(param_2 + 0x340) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x348) = 0xffffffffffffffff;
  *(uint *)(param_2 + 0x324) = param_3 >> 0x18 & 0xf;
  *(uint *)(param_2 + 800) = param_3 >> 7 & 0x2000;
  return;
}

