/*
 * FUN_100732d0 at 100732d0
 * undefined FUN_100732d0(void)
 * Address ranges: 100732d0-100733cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100732d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_101322b0(0x20000);
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_101322b0(0x2000);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      *(char *)(param_1 + 0x82) = (char)param_2[1];
      *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)((int)param_2 + 5);
      *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)((int)param_2 + 6);
      *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)((int)param_2 + 7);
      iVar2 = *param_2;
      *(int *)(param_1 + 0x78) = iVar2;
      *(int *)(param_1 + 0x7c) = (iVar2 + 0x14) * 0x10;
      *(char *)(param_1 + 0x86) = (char)param_2[2];
      *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((int)param_2 + 9);
      FUN_10157c90(param_1 + 0x20,0,8);
      return 1;
    }
    FUN_101322d0(*piVar1);
    *piVar1 = 0;
  }
  return 0;
}

