/*
 * FUN_1400108c8 at 1400108c8
 * undefined8 __cdecl FUN_1400108c8(longlong param_1)
 * Address ranges: 1400108c8-14001093f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400108c8(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  code *pcVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = *(ulonglong *)(param_1 + 0x40);
    if (uVar2 == 0) {
      if (*(int *)(param_1 + 0x48) == 0) goto LAB_140010930;
      uVar2 = (ulonglong)(ushort)*(int *)(param_1 + 0x48);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      pcVar3 = CreateDialogParamW_exref;
    }
    else {
      uVar1 = 0;
      pcVar3 = CreateDialogIndirectParamW_exref;
    }
    (*pcVar3)(uVar1,uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x18),FUN_14000f5f8,
              param_1);
  }
LAB_140010930:
  return *(undefined8 *)(param_1 + 0x18);
}

