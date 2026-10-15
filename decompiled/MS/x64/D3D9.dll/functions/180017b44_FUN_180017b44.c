/*
 * FUN_180017b44 at 180017b44
 * undefined8 __fastcall FUN_180017b44(longlong param_1)
 * Address ranges: 180017b44-180017c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180017b44(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined1 *in_RAX;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  if ((*(int *)(param_1 + 0x7c) == 1) && (*(longlong *)(param_1 + 0x60) == 0)) {
    uVar9 = 1;
    if ((*(uint *)(param_1 + 0x70) & 0x400) == 0) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x3c);
    }
    iVar3 = FUN_180017994(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x6c),uVar9,1,
                          *(int *)(param_1 + 0x74));
    iVar7 = iVar3 * *(int *)(param_1 + 0x80);
    lVar5 = FUN_1800fbccc((ulonglong)(iVar7 + 0x28) + 8);
    puVar6 = (undefined1 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar6 + -8) = lVar5;
    *(undefined1 **)(param_1 + 0x60) = puVar6;
    in_RAX = FUN_1800fbea0(puVar6,0,(ulonglong)(iVar7 + 8));
    uVar8 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      do {
        uVar11 = 0;
        lVar5 = *(longlong *)(param_1 + 0x60);
        if (uVar9 != 0) {
          do {
            uVar4 = FUN_180017994(*(uint *)(param_1 + 0x68),*(uint *)(param_1 + 0x6c),uVar11,1,
                                  *(int *)(param_1 + 0x74));
            uVar10 = (ulonglong)(uVar11 + uVar8 * 0x10);
            uVar11 = uVar11 + 1;
            lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar10 * 8) + 8);
            *(undefined8 *)(lVar2 + 0xf8) = 0;
            *(ulonglong *)(lVar2 + 0x28) = (ulonglong)uVar4 + (ulonglong)(uVar8 * iVar3) + lVar5;
            *(uint *)(lVar2 + 0x48) = *(uint *)(lVar2 + 0x48) | 0x28;
            in_RAX = *(undefined1 **)(param_1 + 0x40);
            puVar1 = (uint *)(*(longlong *)(*(longlong *)(in_RAX + uVar10 * 8) + 8) + 0x48);
            *puVar1 = *puVar1 | 1;
          } while (uVar11 < uVar9);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x80));
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}

