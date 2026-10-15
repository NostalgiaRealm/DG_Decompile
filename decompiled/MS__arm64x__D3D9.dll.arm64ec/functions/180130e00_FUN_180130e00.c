/*
 * FUN_180130e00 at 180130e00
 * undefined FUN_180130e00(void)
 * Address ranges: 180130e00-180130f4f;180130f54-180130f77;180130f98-180130fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180130e00(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0xed) != '\0') && (*(longlong *)(param_1 + 0xd0) != 0)) {
    FUN_18012ff70();
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      uVar3 = (ulonglong)(*(uint *)(param_1 + 0x40) >> 2);
      puVar4 = *(undefined4 **)(param_1 + 0x30);
      if (3 < *(uint *)(param_1 + 0x40)) {
        do {
          uVar3 = uVar3 - 1;
          *puVar4 = 0xffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar3 != 0);
      }
      uVar1 = *(uint *)(param_1 + 0x40);
      uVar3 = (ulonglong)uVar1 & 3;
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 2) * 4);
      if ((uVar1 & 3) != 0) {
        do {
          uVar3 = uVar3 - 1;
          *puVar5 = 0xff;
          puVar5 = puVar5 + 1;
        } while (uVar3 != 0);
      }
      uVar3 = (ulonglong)(*(uint *)(param_1 + 0x40) >> 2);
      puVar4 = *(undefined4 **)(param_1 + 0x38);
      if (3 < *(uint *)(param_1 + 0x40)) {
        do {
          uVar3 = uVar3 - 1;
          *puVar4 = 0xffffffff;
          puVar4 = puVar4 + 1;
        } while (uVar3 != 0);
      }
      uVar1 = *(uint *)(param_1 + 0x40);
      uVar3 = (ulonglong)uVar1 & 3;
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar1 >> 2) * 4);
      if ((uVar1 & 3) != 0) {
        do {
          uVar3 = uVar3 - 1;
          *puVar5 = 0xff;
          puVar5 = puVar5 + 1;
        } while (uVar3 != 0);
      }
      uVar1 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff;
      uVar3 = (ulonglong)(uVar1 >> 0xf);
      bVar2 = (&DAT_18022a8d0)[(ulonglong)(uVar1 >> 0xc) & 7];
      *(byte *)(*(longlong *)(param_1 + 0x30) + uVar3) =
           *(byte *)(*(longlong *)(param_1 + 0x30) + uVar3) & bVar2;
      *(byte *)(*(longlong *)(param_1 + 0x38) + uVar3) =
           *(byte *)(*(longlong *)(param_1 + 0x38) + uVar3) & bVar2;
    }
    if (((*(char *)(param_1 + 0xed) != '\0') && (lVar6 = *(longlong *)(param_1 + 0xd0), lVar6 != 0))
       && (*(char *)(param_1 + 0xec) == '\0')) {
      if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar6,*(undefined8 *)(param_1 + 0xe0),
                            (*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                            *(int *)(param_1 + 0x8c));
      }
      if (*(int *)(param_1 + 0x90) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(lVar6,*(undefined8 *)(param_1 + 0xe0),
                            (uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3);
      }
    }
    *(undefined1 *)(param_1 + 0xed) = 0;
  }
  return;
}

