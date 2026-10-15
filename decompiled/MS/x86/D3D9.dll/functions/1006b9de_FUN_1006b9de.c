/*
 * FUN_1006b9de at 1006b9de
 * uint __fastcall FUN_1006b9de(undefined4 param_1, undefined4 param_2, int * param_3, int param_4, int param_5, uint param_6)
 * Address ranges: 1006b9de-1006ba4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1006b9de(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,uint param_6
            )

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  
  uVar4 = FUN_1006bb13(param_1,param_2,param_4,param_5,(byte)param_6);
  uVar1 = (uint)uVar4;
  if (*(char *)(param_4 + 0x1b4) == '\0') {
    cVar3 = param_5 == 2;
    cVar6 = '\0';
    iVar2 = 1;
    if (param_5 != 0x10) {
      iVar2 = param_5;
    }
    uVar5 = __aullshr((byte)(iVar2 << 2),*(uint *)(*(int *)(param_4 + 0x1a0) + 0x4c));
    uVar1 = FUN_10068555(param_3,param_4,uVar1,param_6,0,(byte)uVar5 & 0xf,cVar3,cVar6);
  }
  return uVar1;
}

