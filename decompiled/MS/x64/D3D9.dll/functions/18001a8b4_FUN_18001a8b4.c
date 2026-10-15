/*
 * FUN_18001a8b4 at 18001a8b4
 * undefined8 __fastcall FUN_18001a8b4(char * param_1)
 * Address ranges: 18001a8b4-18001aa8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001a8b4(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar5 = *(ushort *)(param_1 + 0x30);
  uVar8 = (ulonglong)uVar5;
  bVar10 = true;
  if (uVar5 == 0) {
LAB_18001a8ef:
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 4;
    goto LAB_18001a8f4;
  }
  uVar7 = (uint)uVar5;
  if (uVar7 != 0x1f) {
    if (uVar7 != 0x51) {
      uVar7 = uVar7 - 0xfffe;
      uVar8 = (ulonglong)uVar7;
      if (uVar7 == 0) {
        uVar8 = (ulonglong)((*(uint *)(param_1 + 0x34) >> 0x10) + 1) * 4;
        *(ulonglong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + uVar8;
        goto LAB_18001a8f4;
      }
      if (uVar7 != 1) goto LAB_18001a8f4;
      bVar10 = *(int *)(param_1 + 0x34) == 0;
      goto LAB_18001a8ef;
    }
    uVar8 = 0;
    if (*(int *)(param_1 + 0x34) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar7 = *(uint *)(lVar6 + 4);
      if (((-1 < (int)uVar7) ||
          (uVar8 = (ulonglong)(uVar7 & 0x70000000), (uVar7 & 0x70000000) != 0x20000000)) ||
         (uVar8 = (ulonglong)(uVar7 & 0xfff0000), (uVar7 & 0xfff0000) != 0xf0000))
      goto LAB_18001a9dc;
      uVar9 = uVar7 & 0x7ff;
      uVar8 = *(ulonglong *)(param_1 + 8);
      if (*(ushort *)(uVar8 + (ulonglong)((uint)(*param_1 == '\0') + (uVar7 >> 0x1c & 7) * 2) * 2)
          <= uVar9) goto LAB_18001a9dc;
      uVar1 = *(undefined4 *)(lVar6 + 8);
      uVar2 = *(undefined4 *)(lVar6 + 0xc);
      uVar3 = *(undefined4 *)(lVar6 + 0x10);
      uVar4 = *(undefined4 *)(lVar6 + 0x14);
      uVar7 = uVar9 * 4;
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x44f + (ulonglong)uVar9) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x850 + (ulonglong)uVar7 * 4) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x850 + (ulonglong)(uVar7 + 1) * 4) = uVar2;
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x850 + (ulonglong)(uVar7 + 2) * 4) = uVar3;
      uVar8 = *(ulonglong *)(param_1 + 0x18);
      *(undefined4 *)(uVar8 + 0x850 + (ulonglong)(uVar7 + 3) * 4) = uVar4;
    }
    else {
LAB_18001a9dc:
      bVar10 = false;
    }
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0x18;
    goto LAB_18001a8f4;
  }
  uVar8 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x28) + 8);
    if (((-1 < (int)uVar7) ||
        (uVar8 = (ulonglong)(uVar7 & 0x70000000), (uVar7 & 0x70000000) != 0x10000000)) ||
       (uVar8 = (ulonglong)(uVar7 & 0xfff0000), (uVar7 & 0xfff0000) != 0xf0000)) goto LAB_18001aa7e;
    uVar9 = uVar7 & 0x7ff;
    uVar8 = *(ulonglong *)(param_1 + 8);
    if (*(ushort *)(uVar8 + (ulonglong)((uint)(*param_1 == '\0') + (uVar7 >> 0x1c & 7) * 2) * 2) <=
        uVar9) goto LAB_18001aa7e;
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x28) + 4);
    uVar8 = (ulonglong)(uVar7 & 0xfff0fff0);
    if ((uVar7 & 0xfff0fff0) != 0x80000000) goto LAB_18001aa7e;
    uVar8 = (ulonglong)CONCAT31(0x800000,(char)uVar7) & 0xffffffffffffff0f;
    if (0xd < (byte)uVar8) goto LAB_18001aa7e;
    uVar8 = *(ulonglong *)(param_1 + 0x18);
    *(byte *)(uVar9 + uVar8) = (char)uVar7 << 4 ^ (byte)(uVar7 >> 0x10) & 0xf;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1 << ((byte)uVar9 & 0x1f);
  }
  else {
LAB_18001aa7e:
    bVar10 = false;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 0xc;
LAB_18001a8f4:
  return CONCAT71((int7)(uVar8 >> 8),bVar10);
}

