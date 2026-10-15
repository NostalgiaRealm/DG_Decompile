/*
 * FUN_180084e74 at 180084e74
 * undefined8 __fastcall FUN_180084e74(undefined8 param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 180084e74-180085081
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180084e74(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined2 local_e2;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_b8 [17];
  
  local_f8 = 0x4e475349;
  local_d0 = 0x210;
  local_f0 = 0;
  local_ec = 8;
  local_c8 = 1;
  local_e0 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_d8 = local_e0;
  FUN_1800edd90((longlong *)&local_e0,&local_f8,0x10);
  FUN_1800fbea0((undefined1 *)local_b8,0,0x80);
  iVar10 = 0;
  uVar9 = 0;
  do {
    if ((*(char *)(uVar9 + 0x10 + param_3[2]) != '\0') &&
       (cVar1 = *(char *)(uVar9 + param_3[2]), cVar1 != -1)) {
      lVar2 = *param_3;
      uVar5 = 0xffffffff;
      if (*(int *)(lVar2 + 8) != 0) {
        uVar8 = 0;
        do {
          uVar5 = (ulonglong)*(byte *)(lVar2 + 0x214 + uVar8);
          if (*(char *)(lVar2 + 0x19 + uVar5 * 8) == cVar1) break;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          uVar5 = 0xffffffff;
        } while (uVar7 < *(uint *)(lVar2 + 8));
      }
      if ((int)uVar5 == -1) {
        *(undefined1 *)((longlong)param_3 + uVar9 + 0xee) = 0xff;
        *(undefined1 *)((longlong)param_3 + uVar9 + 0xde) = 0xff;
      }
      else {
        local_f8 = (ulonglong)CONCAT14(cVar1,(undefined4)local_f8) & 0xfffffffff;
        local_f0 = 0;
        cVar1 = *(char *)(lVar2 + 0x1a + uVar5 * 8);
        *(undefined1 *)((longlong)param_3 + uVar9 + 0xde) =
             *(undefined1 *)(lVar2 + 0x18 + uVar5 * 8);
        local_e8 = (uint)uVar9 & 0xff;
        *(char *)((longlong)param_3 + uVar9 + 0xee) = cVar1;
        if ((cVar1 == '\0') || (cVar1 == '\x01')) {
LAB_180084fc0:
          local_ec = 3;
LAB_180084fc8:
          local_e4 = 0xf;
        }
        else {
          if (cVar1 == '\x02') {
            local_ec = 1;
            goto LAB_180084fc8;
          }
          if ((cVar1 == '\x03') || (cVar1 == '\x04')) {
            local_ec = 2;
            goto LAB_180084fc8;
          }
          if ((cVar1 != '\x05') && (cVar1 != '\x06')) goto LAB_180084fc0;
          local_ec = 1;
          local_e4 = 1;
        }
        if ((byte)(cVar1 - 5U) < 2) {
          local_e3 = 1;
        }
        else {
          local_e3 = *(undefined1 *)(uVar9 + 0x10 + param_3[2]);
        }
        local_e2 = 0;
        pbVar4 = (byte *)FUN_180088d0c(*(byte *)(uVar9 + param_3[2]));
        uVar5 = FUN_1800ede70(local_b8,pbVar4);
        local_f8 = CONCAT44(local_f8._4_4_,(int)uVar5);
        iVar10 = iVar10 + 1;
        FUN_1800edd90((longlong *)&local_e0,&local_f8,0x18);
      }
    }
    uVar7 = (uint)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
    if (0xf < uVar7) {
      FUN_1800ee130((longlong *)&local_e0,iVar10,local_b8);
      puVar3 = local_e0;
      FUN_1800edd90(param_2,local_e0,(longlong)local_d8 - (longlong)local_e0);
      uVar6 = FUN_1800fbcf0(puVar3);
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
  } while( true );
}

