/*
 * FUN_18008d824 at 18008d824
 * ulonglong __fastcall FUN_18008d824(longlong * param_1, uint * param_2)
 * Address ranges: 18008d824-18008d918
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18008d824(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong in_RAX;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar9 != 0) {
    uVar10 = (ulonglong)
             ((((param_2[10] << 10 | param_2[8]) << 6 | param_2[5]) << 2 | param_2[9] & 0xffff0000)
              << 5 | param_2[7] << 0xb | param_2[4]) |
             ((ulonglong)*param_2 << 0x10 | (ulonglong)param_2[1]) << 0x20;
    uVar8 = 0;
    do {
      uVar7 = uVar9 + uVar8 >> 1;
      in_RAX = (ulonglong)uVar7 * 9;
      uVar3 = *(ulonglong *)(*param_1 + (ulonglong)uVar7 * 0x48);
      uVar6 = uVar7;
      if (uVar3 <= uVar10) {
        if (uVar10 <= uVar3) break;
        uVar8 = uVar7 + 1;
        uVar6 = uVar9;
        uVar7 = uVar8;
      }
      uVar9 = uVar6;
    } while (uVar9 != uVar8);
    if ((uVar7 != *(uint *)((longlong)param_1 + 0xc)) &&
       (in_RAX = (ulonglong)uVar7, *(ulonglong *)(*param_1 + in_RAX * 0x48) == uVar10)) {
      while( true ) {
        uVar9 = uVar7 + 1;
        uVar10 = (ulonglong)uVar9;
        if (*(uint *)((longlong)param_1 + 0xc) <= uVar9) break;
        lVar4 = *param_1;
        in_RAX = (ulonglong)uVar7;
        puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x48);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + in_RAX * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar10 * 0x48);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + 0x10 + in_RAX * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar10 * 0x48);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + 0x20 + in_RAX * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar10 * 0x48);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar4 + 0x30 + in_RAX * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        *(undefined8 *)(lVar4 + 0x40 + in_RAX * 0x48) =
             *(undefined8 *)(lVar4 + 0x40 + uVar10 * 0x48);
        uVar7 = uVar9;
      }
      *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + -1;
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

