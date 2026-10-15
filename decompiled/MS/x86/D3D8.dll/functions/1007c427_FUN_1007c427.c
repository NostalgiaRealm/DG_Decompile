/*
 * FUN_1007c427 at 1007c427
 * undefined4 __stdcall FUN_1007c427(int param_1, uint param_2, int * param_3)
 * Address ranges: 1007c427-1007c4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c427(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char local_5;
  
  if (7 < param_2) {
    return 0x8876086c;
  }
  FUN_10003838(&local_5,(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  piVar3 = (int *)0x0;
  piVar2 = (int *)0x0;
  if (param_3 == (int *)0x0) goto LAB_1007c476;
  iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      piVar2 = param_3 + -0x32;
      goto LAB_1007c476;
    }
    if (iVar1 != 5) goto LAB_1007c476;
  }
  piVar3 = param_3 + -0x1e;
LAB_1007c476:
  FUN_10005bcd((void *)(param_1 + -0x58e0),param_2,piVar3,piVar2);
  FUN_10003881(&local_5);
  return 0;
}

