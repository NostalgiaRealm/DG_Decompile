/*
 * FUN_100106c8 at 100106c8
 * undefined FUN_100106c8(void)
 * Address ranges: 100106c8-100107a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100106c8(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 0x3308);
  puVar2 = (undefined4 *)(param_1 + 0x33ac);
  if (*(char *)(param_1 + 0x33b6) != '\0') {
    *(undefined4 *)(param_1 + 0x335c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x336c) = 2;
    uVar4 = FUN_1005a8e0(*piVar1 + 0x1640,param_1 + 0x333c);
    *puVar2 = uVar4;
  }
  if ((*(char *)(param_1 + 0x33b6) != '\0') || (param_2 != '\0')) {
    FUN_100647f0(*(undefined4 *)(*piVar1 + 0x1304),*puVar2);
    iVar3 = *(int *)(*piVar1 + 0x1304);
    FUN_1005d238(*(undefined4 *)(iVar3 + 0x8e4),*puVar2,*(undefined4 *)(iVar3 + 0x8e0),iVar3,
                 *(undefined8 *)(iVar3 + 0x938));
    *(undefined1 *)(param_1 + 0x33b6) = 0;
  }
  return;
}

