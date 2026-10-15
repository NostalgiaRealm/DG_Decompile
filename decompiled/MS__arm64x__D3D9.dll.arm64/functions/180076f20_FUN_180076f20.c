/*
 * FUN_180076f20 at 180076f20
 * undefined FUN_180076f20(void)
 * Address ranges: 180076f20-18007714b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180076f20(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong local_100;
  longlong lStack_f8;
  uint local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined2 local_ea;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_100 = 0x4e475349;
  lStack_f8 = 0x800000000;
  local_d8 = 0x210;
  local_d0 = 1;
  local_e8 = thunk_FUN_180102f80(0x210);
  lStack_e0 = local_e8;
  FUN_1800f5a90(&local_e8,&local_100,0x10);
  iVar10 = 0;
  uVar12 = 0;
  lVar11 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  do {
    if ((((char *)(param_3[2] + lVar11))[0x10] != '\0') &&
       (cVar1 = *(char *)(param_3[2] + lVar11), cVar1 != -1)) {
      lVar8 = *param_3;
      uVar7 = 0;
      uVar9 = 0xffffffff;
      if (*(uint *)(lVar8 + 8) != 0) {
        do {
          uVar9 = (ulonglong)*(byte *)(lVar8 + 0x214 + uVar7);
          if (*(char *)(lVar8 + 0x19 + uVar9 * 8) == cVar1) break;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar9 = 0xffffffff;
        } while (uVar6 < *(uint *)(lVar8 + 8));
      }
      if ((int)uVar9 == -1) {
        *(undefined1 *)((longlong)param_3 + lVar11 + 0xee) = 0xff;
        *(undefined1 *)((longlong)param_3 + lVar11 + 0xde) = 0xff;
      }
      else {
        lVar8 = lVar8 + uVar9 * 8;
        local_100 = (ulonglong)CONCAT14(cVar1,(undefined4)local_100) & 0xfffffffff;
        bVar2 = *(byte *)(lVar8 + 0x1a);
        uVar3 = *(undefined1 *)(lVar8 + 0x18);
        *(byte *)((longlong)param_3 + lVar11 + 0xee) = bVar2;
        uVar6 = (uint)bVar2;
        *(undefined1 *)((longlong)param_3 + lVar11 + 0xde) = uVar3;
        local_f0 = uVar12 & 0xff;
        if (bVar2 < 2) {
LAB_18007707c:
          uVar6 = 3;
LAB_180077080:
          uVar9 = (ulonglong)uVar6;
          local_ec = 0xf;
LAB_180077088:
          lStack_f8 = uVar9 << 0x20;
          if (1 < (byte)(bVar2 - 5)) goto LAB_18007709c;
          local_eb = 1;
        }
        else {
          if (uVar6 - 3 < 2) {
            uVar6 = 2;
            goto LAB_180077080;
          }
          if (uVar6 - 5 < 2) {
            uVar9 = 1;
            local_ec = 1;
            goto LAB_180077088;
          }
          if (uVar6 != 2) goto LAB_18007707c;
          lStack_f8 = 0x100000000;
          local_ec = 0xf;
LAB_18007709c:
          local_eb = *(undefined1 *)(param_3[2] + lVar11 + 0x10);
        }
        local_ea = 0;
        uVar5 = FUN_180079d90(*(undefined1 *)(lVar11 + param_3[2]));
        uVar4 = func_0x000180212e90(&local_c0,uVar5);
        local_100 = CONCAT44(local_100._4_4_,uVar4);
        iVar10 = iVar10 + 1;
        FUN_1800f5a90(&local_e8,&local_100,0x18);
      }
    }
    uVar12 = uVar12 + 1;
    lVar11 = lVar11 + 1;
    if (0xf < uVar12) {
      FUN_1800f5da0(&local_e8,iVar10,&local_c0);
      lVar11 = local_e8;
      FUN_1800f5a90(param_2,local_e8,lStack_e0 - local_e8);
      thunk_FUN_180102fc0(lVar11);
      return 1;
    }
  } while( true );
}

