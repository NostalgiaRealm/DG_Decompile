/*
 * FUN_1007bb56 at 1007bb56
 * undefined4 __stdcall FUN_1007bb56(int param_1, int * param_2, int * param_3)
 * Address ranges: 1007bb56-1007bc13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bb56(int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_9 [5];
  
  uVar6 = 0x8876086c;
  if (param_2 == (int *)0x0) {
    return 0x8876086c;
  }
  if (param_3 == (int *)0x0) {
    return 0x8876086c;
  }
  FUN_10003838(local_9,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  iVar3 = (**(code **)(*param_3 + 0x28))(param_3);
  if (iVar2 == iVar3) {
    if (iVar3 == 3) {
      uVar5 = FUN_10010223(param_3 + -0x1e,param_2 + -0x1e);
      if ((char)uVar5 != '\0') {
        uVar6 = 0;
      }
    }
    else {
      if (iVar3 == 4) {
        uVar4 = FUN_10011800(param_3 + -0x32,param_2 + -0x32);
        cVar1 = (char)uVar4;
      }
      else {
        if (iVar3 != 5) goto LAB_1007bc00;
        uVar6 = FUN_10010223(param_3 + -0x1e,param_2 + -0x1e);
        cVar1 = (char)uVar6;
      }
      uVar6 = 0;
      if (cVar1 == '\0') {
        uVar6 = 0x8876086c;
      }
    }
  }
LAB_1007bc00:
  FUN_10003881(&stack0xffffffef);
  return uVar6;
}

