/*
 * FUN_1800a4b10 at 1800a4b10
 * undefined __fastcall FUN_1800a4b10(longlong * param_1, uint * param_2, uint param_3, int param_4, int param_5, uint param_6)
 * Address ranges: 1800a4b10-1800a4d0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a4b10(longlong *param_1,uint *param_2,uint param_3,int param_4,int param_5,uint param_6
                  )

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_6;
  if (param_6 == 0) {
    uVar2 = FUN_1800a47b0((longlong)param_2,param_3,
                          -(uint)(*(char *)((ulonglong)(-(uint)((*param_2 & 0x400) != 0) & 2) + 6 +
                                           (longlong)param_2) != '\0') & 2 |
                          (uint)(*(char *)((ulonglong)(-(uint)((*param_2 & 0x400) != 0) & 2) + 5 +
                                          (longlong)param_2) != '\0'));
  }
  uVar3 = -(uint)((*param_2 & 0x1000) != 0) & 7;
  puVar1 = param_2 + 4;
  if (param_4 == 0) {
    FUN_1800edbe0(puVar1,param_1,1,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_1,uVar3 + 0x20,(ulonglong)uVar2);
  }
  else {
    FUN_1800edbe0(puVar1,param_1,uVar3 + 0x20,(ulonglong)uVar2);
  }
  FUN_1800a4824(param_1,param_2,param_5,uVar2);
  if ((param_6 != uVar2) &&
     (((char)uVar2 != (char)param_3 ||
      (((byte)(uVar2 >> 8) & 0x3f) != ((byte)(param_3 >> 8) & 0x3f))))) {
    FUN_1800ec960((longlong)puVar1,uVar2);
  }
  return;
}

