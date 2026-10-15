/*
 * FUN_10024826 at 10024826
 * undefined __fastcall FUN_10024826(ushort * param_1, uint param_2, ushort param_3)
 * Address ranges: 10024826-10024aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024826(ushort *param_1,uint param_2,ushort param_3)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *extraout_EDX;
  ushort *extraout_EDX_00;
  ushort *extraout_EDX_01;
  ushort *puVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  bool bVar9;
  
  uVar7 = *param_1;
  cVar2 = FUN_10023e61();
  if (cVar2 == '\0') {
    uVar8 = param_1[1];
    puVar1 = param_1 + 2;
    cVar2 = FUN_10023e61();
    puVar6 = extraout_EDX;
    if ((cVar2 != '\0') && (cVar2 = FUN_10023e61(), puVar6 = extraout_EDX_00, cVar2 != '\0'))
    goto LAB_1002486f;
    uVar3 = *puVar1;
    if ((uVar8 & 0xf0ff) == (uVar3 & 0xf0ff)) {
      uVar8 = uVar8 & 0xf00;
      if (uVar8 == 0x200) {
        bVar9 = (uVar3 & 0xf00) == 0;
      }
      else {
        if (uVar8 != 0) goto LAB_100248cf;
        bVar9 = (uVar3 & 0xf00) == 0x200;
      }
      if (bVar9) goto LAB_1002486f;
    }
LAB_100248cf:
    if ((uVar7 & 0xff0) == 0x100) {
      if ((((uVar3 & 0xff0) == 0) || (puVar5 = puVar6, (uVar3 & 0xff0) == 0x200)) &&
         (cVar2 = FUN_10023e61(), puVar5 = extraout_EDX_01, cVar2 != '\0')) {
        param_1[3] = *extraout_EDX_01;
        *extraout_EDX_01 = 0;
        uVar7 = 0;
        *param_1 = 0;
        goto LAB_10024a97;
      }
      puVar6 = puVar5;
      if ((((*puVar5 & 0xff0) != 0) && ((*puVar5 & 0xff0) != 0x200)) ||
         (((param_1[3] & 0xff0) != 0 && ((param_1[3] & 0xff0) != 0x200)))) goto LAB_10024972;
      param_1[3] = uVar3;
      *puVar1 = 0;
      goto LAB_1002487b;
    }
LAB_10024972:
    if ((((uVar7 & 0xff0) != 0) && ((uVar7 & 0xff0) != 0x200)) &&
       (((uVar8 = *puVar6 & 0xff0, uVar8 == 0x100 &&
         (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) ||
        (((uVar3 & 0xff0) == 0x100 && ((uVar8 == 0 || (uVar8 == 0x200)))))))) {
      uVar3 = 0;
      if (((param_1[3] & 0xff0) == 0) || (bVar9 = false, (param_1[3] & 0xff0) == 0x200)) {
        bVar9 = true;
      }
      *puVar1 = 0;
      puVar6 = param_1 + 1;
      if (!bVar9) {
        *puVar6 = *param_1;
        *param_1 = 0x100;
        return;
      }
      param_1[3] = *param_1;
      *puVar6 = 0;
      *param_1 = 0;
      goto LAB_10024a41;
    }
  }
  else {
LAB_1002486f:
    param_1[2] = 0;
    param_1[1] = 0;
    puVar6 = param_1 + 1;
LAB_1002487b:
    uVar3 = 0;
    uVar7 = 0;
    *param_1 = 0;
  }
LAB_10024a97:
  if (((uVar7 & 0xff0) != 0) && ((uVar7 & 0xff0) != 0x200)) {
    return;
  }
LAB_10024a41:
  if (((((*puVar6 & 0xff0) == 0) || ((*puVar6 & 0xff0) == 0x200)) &&
      (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) && ((char)param_1[4] == '\0')) {
    uVar4 = FUN_10024156((uint)param_1[3],param_2);
    if ((ushort)uVar4 != 0xf0) {
      param_1[5] = (ushort)uVar4 | param_3;
    }
  }
  return;
}

