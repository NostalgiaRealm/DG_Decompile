/*
 * FUN_10014561 at 10014561
 * int __fastcall FUN_10014561(uint param_1, uint param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10014561-100145b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10014561(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = 0;
  iVar6 = 0;
  if (param_3 != 0) {
    do {
      uVar5 = param_2 >> ((byte)uVar4 & 0x1f);
      uVar1 = param_1 >> ((byte)uVar4 & 0x1f);
      uVar3 = 1;
      if (uVar5 != 0) {
        uVar3 = uVar5;
      }
      uVar5 = 1;
      if (uVar1 != 0) {
        uVar5 = uVar1;
      }
      iVar2 = FUN_10012477(uVar5,uVar3,param_5);
      iVar6 = iVar6 + iVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return iVar6 * param_4;
}

