/*
 * FUN_10012650 at 10012650
 * undefined FUN_10012650(void)
 * Address ranges: 10012650-1001272f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012650(int param_1,char param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)(param_1 + 0x3688);
  puVar2 = (undefined4 *)(param_1 + 0x372c);
  if (*(char *)(param_1 + 0x3736) != '\0') {
    *(undefined4 *)(param_1 + 0x36dc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x36ec) = 2;
    uVar4 = FUN_1005ff90(*piVar1 + 0x1640,param_1 + 0x36bc);
    *puVar2 = uVar4;
  }
  if ((*(char *)(param_1 + 0x3736) != '\0') || (param_2 != '\0')) {
    FUN_10069e90(*(undefined4 *)(*piVar1 + 0x1304),*puVar2);
    iVar3 = *(int *)(*piVar1 + 0x1304);
    FUN_100628e8(*(undefined4 *)(iVar3 + 0x8e4),*puVar2,*(undefined4 *)(iVar3 + 0x8e0),iVar3,
                 *(undefined8 *)(iVar3 + 0x938));
    *(undefined1 *)(param_1 + 0x3736) = 0;
  }
  return;
}

