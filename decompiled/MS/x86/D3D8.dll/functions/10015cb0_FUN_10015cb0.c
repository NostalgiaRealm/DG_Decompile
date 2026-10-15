/*
 * FUN_10015cb0 at 10015cb0
 * undefined __fastcall FUN_10015cb0(void * param_1)
 * Address ranges: 10015cb0-10015d81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015cb0(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)param_1 + 0xc);
  if (*(char *)(iVar3 + 0x7e9) != *(char *)(iVar3 + 0x5d1)) {
    (**(code **)(**(int **)((int)param_1 + 0x14) + 0x34))(*(char *)(iVar3 + 0x5d1));
    *(undefined1 *)(*(int *)((int)param_1 + 0xc) + 0x7e9) = *(undefined1 *)(iVar3 + 0x5d1);
  }
  iVar1 = *(int *)((int)param_1 + 0xc);
  if (((*(int *)(iVar1 + 0x7dc) != *(int *)(iVar3 + 0x5c4)) ||
      (*(char *)(iVar1 + 0x7eb) != *(char *)(iVar3 + 0x5d3))) ||
     (*(int *)(iVar1 + 0x7e0) != *(int *)(iVar3 + 0x5c8))) {
    *(int *)(iVar1 + 0x7dc) = *(int *)(iVar3 + 0x5c4);
    uVar2 = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0xc) + 0x7eb) = *(undefined1 *)(iVar3 + 0x5d3);
    *(undefined4 *)(*(int *)((int)param_1 + 0xc) + 0x7e0) = *(undefined4 *)(iVar3 + 0x5c8);
    do {
      iVar3 = uVar2 * 0x74;
      FUN_10013c31(param_1,uVar2,0x10,*(uint *)((int)param_1 + iVar3 + 0x584));
      FUN_10013c31(param_1,uVar2,0x11,*(uint *)((int)param_1 + iVar3 + 0x588));
      FUN_10013c31(param_1,uVar2,0x12,*(uint *)((int)param_1 + iVar3 + 0x58c));
      FUN_10013c31(param_1,uVar2,0x15,*(uint *)((int)param_1 + iVar3 + 0x598));
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return;
}

