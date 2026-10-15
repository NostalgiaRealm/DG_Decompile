/*
 * FUN_18002a1ac at 18002a1ac
 * undefined __fastcall FUN_18002a1ac(longlong param_1, uint param_2, longlong param_3, ulonglong param_4)
 * Address ranges: 18002a1ac-18002a31e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a1ac(longlong param_1,uint param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  ushort *puVar11;
  
  cVar6 = (char)param_4;
  puVar11 = (ushort *)
            ((ulonglong)(-(uint)(cVar6 != '\0') & 0x38) + 0xb8 +
            param_3 + (ulonglong)(param_2 + 1) * 0xe);
  if (param_2 < 2) {
    uVar10 = *(ushort *)
              ((ulonglong)(param_2 + 2) * 0xe + param_3 + 0xc2 +
              (ulonglong)(-(uint)(cVar6 != '\0') & 0x38));
  }
  else {
    uVar10 = 0;
  }
  lVar9 = (ulonglong)param_2 * 0x1a0 + param_1;
  uVar5 = (short)param_4 << 0xc;
  uVar1 = *(uint *)(lVar9 + 0x100 + (param_4 & 0xff) * 0x10);
  if (cVar6 == '\0') {
    uVar8 = *(uint *)(lVar9 + 0x104);
    lVar3 = 0x108;
  }
  else {
    uVar8 = *(uint *)(lVar9 + 0x114);
    lVar3 = 0x118;
  }
  uVar4 = -(ushort)(*(int *)(lVar3 + lVar9) != 0) & 0x100;
  if (uVar8 < 0x10) {
    uVar7 = *(ushort *)(&DAT_1800649d0 + (ulonglong)uVar8 * 2);
    uVar8 = (uint)uVar7;
    if (((byte)uVar7 & 0xf0) == 0xf0) {
      uVar2 = FUN_180029fd0(uVar10,uVar7 & 0xf00);
      uVar8 = (uint)(uVar7 & 0x1000 | uVar2);
    }
  }
  else {
    uVar8 = 0;
  }
  uVar2 = (ushort)uVar8;
  uVar7 = (ushort)param_2;
  if (((uVar8 & 0xf0) - 0x20 & 0xffffffef) == 0) {
    if (*(int *)(lVar9 + 0x144) == 0) {
      uVar2 = uVar2 & 0xff0f;
    }
    else {
      uVar2 = uVar2 | uVar7;
    }
  }
  FUN_18002a0ac(uVar1,uVar5 | uVar2,uVar10,uVar7 | uVar5 | 0x2010,uVar7 | 0x3010,uVar4,uVar5,
                (ushort)(param_2 + 1),(undefined8 *)puVar11);
  FUN_18002a5a4(puVar11,uVar4,uVar5);
  return;
}

