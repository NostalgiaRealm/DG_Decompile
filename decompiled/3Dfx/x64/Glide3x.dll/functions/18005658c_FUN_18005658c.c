/*
 * FUN_18005658c at 18005658c
 * undefined8 __fastcall FUN_18005658c(longlong * param_1, uint * param_2)
 * Address ranges: 18005658c-1800566e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005658c(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar12;
  
  uVar11 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)-param_2[2];
  if (uVar11 != 0) {
    lVar14 = *param_1;
    uVar13 = (ulonglong)
             (((*param_2 & 3) << 2 | -(uint)(param_2[9] != 0) & 0x100 |
               -(uint)(param_2[8] != 0) & 0x80 | -(uint)(param_2[6] != 0) & 0x40 |
               -(uint)(param_2[7] != 0) & 0x20 | -(uint)(param_2[2] != 0) & 0x10 | param_2[1] & 3) ^
             param_2[5]) | ((ulonglong)param_2[4] ^ (longlong)(int)param_2[3]) << 0x20;
    uVar6 = 0;
    uVar10 = uVar11;
    do {
      uVar9 = uVar10 + uVar6 >> 1;
      uVar12 = (ulonglong)uVar9;
      uVar5 = uVar12 * 0x38;
      uVar3 = *(ulonglong *)(lVar14 + uVar5);
      if (uVar3 <= uVar13) {
        if (uVar13 <= uVar3) break;
        uVar6 = uVar9 + 1;
        uVar12 = (ulonglong)uVar6;
        uVar9 = uVar10;
      }
      uVar10 = uVar9;
    } while (uVar10 != uVar6);
    if ((((uint)uVar12 != uVar11) &&
        (lVar7 = uVar12 * 0x38, uVar5 = uVar12, *(ulonglong *)(lVar7 + lVar14) == uVar13)) &&
       (uVar5 = FUN_180056084(lVar7,param_2,(uint *)(lVar14 + 8 + lVar7)), (char)uVar5 == '\0')) {
      uVar5 = FUN_1800560e4((longlong)param_1,*(longlong **)(lVar7 + 0x30 + lVar14));
      uVar11 = (uint)uVar12;
      while( true ) {
        uVar10 = uVar11 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar10) break;
        lVar14 = *param_1;
        lVar8 = (ulonglong)uVar11 * 0x38;
        uVar5 = (ulonglong)uVar10;
        lVar7 = uVar5 * 0x38;
        uVar4 = ((undefined8 *)(lVar7 + lVar14))[1];
        *(undefined8 *)(lVar8 + lVar14) = *(undefined8 *)(lVar7 + lVar14);
        ((undefined8 *)(lVar8 + lVar14))[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar14);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar14);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        *(undefined8 *)(lVar8 + 0x30 + lVar14) = *(undefined8 *)(lVar7 + 0x30 + lVar14);
        uVar11 = uVar10;
      }
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) - 1;
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  return uVar5 & 0xffffffffffffff00;
}

