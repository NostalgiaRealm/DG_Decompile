/*
 * FUN_180074694 at 180074694
 * undefined __fastcall FUN_180074694(longlong * param_1)
 * Address ranges: 180074694-180074734
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180074694(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x4f8);
  if (iVar1 != 0) {
    *(undefined1 *)((ulonglong)(iVar1 - 1) + 0x50c + *param_1) = 1;
    lVar2 = *param_1;
    if (*(char *)(*(longlong *)(lVar2 + 0x100) + 0x148) != '\0') {
      if (*(int *)(lVar2 + 0x304) == 0) {
        uVar3 = FUN_1800ec8c0(lVar2,4,'\x01');
        *(uint *)(*param_1 + 0x304) = uVar3;
      }
      FUN_1800edbe0((uint *)*param_1,(longlong *)param_1[1],0x36,(ulonglong)((uint *)*param_1)[0xc1]
                   );
    }
  }
  return;
}

