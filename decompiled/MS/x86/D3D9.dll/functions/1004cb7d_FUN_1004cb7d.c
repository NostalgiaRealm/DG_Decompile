/*
 * FUN_1004cb7d at 1004cb7d
 * undefined __fastcall FUN_1004cb7d(int param_1)
 * Address ranges: 1004cb7d-1004cc06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004cb7d(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      piVar3 = (int *)0x0;
      goto LAB_1004cbac;
    }
    do {
      piVar3 = (int *)(*(int *)(param_1 + 0x18) + 8 + uVar4 * 0x28);
LAB_1004cbac:
      if (*(int *)(*piVar3 + 8) == 9) {
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1304);
        cVar2 = FUN_100c2913(*(void **)(param_1 + 0xc),
                             *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x1300) + 0xc),
                             *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c),
                             piVar3 + 4);
        if (cVar2 != '\0') {
          FUN_100bc25f(*(int *)(*(int *)(param_1 + 4) + 0x1304),piVar3[4],0,piVar3[6]);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1c));
  }
  return;
}

