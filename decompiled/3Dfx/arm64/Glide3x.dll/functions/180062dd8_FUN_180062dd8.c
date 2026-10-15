/*
 * FUN_180062dd8 at 180062dd8
 * undefined8 __cdecl FUN_180062dd8(longlong * param_1)
 * Address ranges: 180062dd8-180062e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180062dd8(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (*(uint *)(param_1 + 2) != 0xffffffff) {
    lVar3 = (ulonglong)*(uint *)(param_1 + 2) * 0x10;
    uVar4 = *(undefined8 *)(*param_1 + lVar3);
    *(undefined8 *)(*param_1 + lVar3) = 0;
    uVar1 = *(uint *)(param_1 + 2);
    lVar5 = *param_1;
    lVar3 = lVar5 + (ulonglong)uVar1 * 0x10;
    uVar2 = *(uint *)(lVar3 + 0xc);
    if ((uVar2 != 0xffffffff) && (*(longlong *)(lVar5 + (ulonglong)uVar2 * 0x10) != 0)) {
      *(uint *)(param_1 + 2) = uVar2;
      *(undefined4 *)(lVar3 + 0xc) =
           *(undefined4 *)(lVar5 + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10 + 0xc);
      *(undefined4 *)(*param_1 + (ulonglong)uVar1 * 0x10 + 8) =
           *(undefined4 *)((longlong)param_1 + 0x14);
      *(uint *)(*param_1 + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10 + 0xc) = uVar1;
      uVar2 = *(uint *)(*param_1 + (ulonglong)uVar1 * 0x10 + 0xc);
      if (uVar2 != 0xffffffff) {
        *(uint *)(*param_1 + (ulonglong)uVar2 * 0x10 + 8) = uVar1;
      }
    }
  }
  return uVar4;
}

