/*
 * FUN_180067058 at 180067058
 * undefined __fastcall FUN_180067058(undefined8 param_1, uint * param_2, longlong * param_3)
 * Address ranges: 180067058-1800670eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180067058(undefined8 param_1,uint *param_2,longlong *param_3)

{
  uint uVar1;
  
  if (param_2[0x86] == 0) {
    uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\x01');
    param_2[0x86] = uVar1;
    if (*(byte *)((longlong)param_2 + 0x20a) != 0xf) {
      FUN_1800ee208(*(byte *)((longlong)param_2 + 0x20e),*(byte *)((longlong)param_2 + 0x20a) ^ 0xf)
      ;
      FUN_1800edbe0(param_2,param_3,0x2036,(ulonglong)param_2[0x86]);
    }
  }
  return;
}

