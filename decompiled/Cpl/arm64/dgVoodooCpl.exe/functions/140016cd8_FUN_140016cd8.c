/*
 * FUN_140016cd8 at 140016cd8
 * bool __cdecl FUN_140016cd8(longlong param_1, ulonglong param_2, uint param_3)
 * Address ranges: 140016cd8-140016e1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140016cd8(longlong param_1,ulonglong param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  SIZE_T SVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar4 = FUN_140016f80(param_1,(undefined8 *)
                                (*(longlong *)(param_1 + 0x58) + (param_2 & 0xffffffff)),param_3);
  bVar3 = iVar4 != -1;
  if (iVar4 != -1) {
    uVar9 = 0;
    uVar8 = 0;
    lVar1 = *(longlong *)
             (*(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x80) * 0x18 + 8) +
            (ulonglong)*(uint *)(param_1 + 0x84) * 0x28;
    if (*(int *)(lVar1 + 0x10) != 0) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = FUN_140024ce0((byte *)(*(longlong *)(param_1 + 0x70) +
                                      (ulonglong)*(uint *)(*(longlong *)(lVar1 + 8) + uVar9 * 4)),
                              (byte *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar4));
        if (uVar5 == 0) {
          *(uint *)(param_1 + 0x7c) = (*(int *)(param_1 + 0x7c) - param_3) + -1;
          break;
        }
        uVar8 = uVar8 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(lVar1 + 0x10));
    }
    if (uVar8 == *(uint *)(lVar1 + 0x10)) {
      uVar8 = *(uint *)(lVar1 + 0x14);
      if (*(uint *)(lVar1 + 0x10) == uVar8) {
        uVar5 = uVar8 << 1;
        if (uVar8 == 0) {
          uVar5 = 0x10;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = CONCAT44(0,uVar5);
        SVar7 = CONCAT44(0,uVar5) << 2;
        if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
          SVar7 = 0xffffffffffffffff;
        }
        puVar6 = (undefined8 *)thunk_FUN_1400247f0(SVar7);
        if (puVar6 == (undefined8 *)0x0) {
          return false;
        }
        thunk_FUN_140001000(puVar6,*(undefined8 **)(lVar1 + 8),
                            (ulonglong)*(uint *)(lVar1 + 0x14) << 2);
        thunk_FUN_140024830(*(LPVOID *)(lVar1 + 8));
        *(undefined8 **)(lVar1 + 8) = puVar6;
        *(uint *)(lVar1 + 0x14) = uVar5;
      }
      bVar3 = true;
      *(int *)(*(longlong *)(lVar1 + 8) + (ulonglong)*(uint *)(lVar1 + 0x10) * 4) = iVar4;
      *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
    }
  }
  return bVar3;
}

