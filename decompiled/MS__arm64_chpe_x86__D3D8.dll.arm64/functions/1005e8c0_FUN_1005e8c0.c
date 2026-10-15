/*
 * FUN_1005e8c0 at 1005e8c0
 * undefined FUN_1005e8c0(void)
 * Address ranges: 1005e8c0-1005e9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005e8c0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_100fece0(0x20000);
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_100fece0(0x2000);
    *(int *)(param_1 + 0x1c) = iVar2;
    if (iVar2 != 0) {
      *(char *)(param_1 + 0x82) = (char)param_2[1];
      *(undefined1 *)(param_1 + 0x83) = *(undefined1 *)((int)param_2 + 5);
      *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)((int)param_2 + 6);
      *(undefined1 *)(param_1 + 0x85) = *(undefined1 *)((int)param_2 + 7);
      iVar2 = *param_2;
      *(int *)(param_1 + 0x78) = iVar2;
      *(int *)(param_1 + 0x7c) = iVar2 << 4;
      *(char *)(param_1 + 0x86) = (char)param_2[2];
      *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)((int)param_2 + 9);
      FUN_10121220(param_1 + 0x20,0,8);
      return 1;
    }
    FUN_100fed00(*piVar1);
    *piVar1 = 0;
  }
  return 0;
}

