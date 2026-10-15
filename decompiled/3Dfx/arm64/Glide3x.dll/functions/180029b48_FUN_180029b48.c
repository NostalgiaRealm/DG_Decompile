/*
 * FUN_180029b48 at 180029b48
 * undefined8 __cdecl FUN_180029b48(longlong param_1, uint * param_2, uint * param_3)
 * Address ranges: 180029b48-180029ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180029b48(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  HMODULE pHVar4;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong extraout_x1;
  longlong lVar12;
  undefined1 auVar13 [16];
  longlong local_b0;
  int local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  FUN_180063e98((undefined1 *)(param_1 + 0x148),0,0xa80);
  lVar12 = 0;
  do {
    lVar2 = lVar12 + 1;
    lVar12 = lVar12 * 0x180;
    *(undefined8 *)(param_1 + 0x208 + lVar12) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3330);
    *(ulonglong *)(param_1 + 0x210 + lVar12) =
         *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330) +
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338) * 0x18c0 + 0x6b0;
    *(undefined4 *)(param_1 + lVar12 + 0x148) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3338);
    lVar12 = lVar2;
  } while (lVar2 != 7);
  uVar9 = FUN_18002f1a0((uint *)(param_1 + 0x148),param_2,0);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  uVar9 = FUN_18002f1a0((uint *)(param_1 + 0x2c8),param_2,0);
  if ((uVar9 & 1) == 0) goto LAB_180029ea0;
  bVar5 = *(int *)(*(longlong *)(param_1 + 0x140) + 0xdc) == 2;
  if (!bVar5) {
    param_3 = param_2;
  }
  uVar9 = FUN_18002f1a0((uint *)(param_1 + 0x448),param_3,bVar5);
  pHVar4 = DAT_18006f9c0;
  if ((uVar9 & 1) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0xbc8);
    bVar5 = true;
    uVar8 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338);
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330);
    *(undefined8 *)(param_1 + 0xbd0) = 0;
    *puVar3 = 0;
    *(undefined8 *)(param_1 + 0xbe0) = 0;
    *(undefined8 *)(param_1 + 0xbd8) = 0;
    *(undefined8 *)(param_1 + 0xbf0) = 0;
    *(undefined8 *)(param_1 + 0xbe8) = 0;
    *(undefined8 *)(param_1 + 0xc00) = 0;
    *(undefined8 *)(param_1 + 0xbf8) = 0;
    *(undefined8 *)(param_1 + 0xc10) = 0;
    *(undefined8 *)(param_1 + 0xc08) = 0;
    *(undefined8 *)(param_1 + 0xc20) = 0;
    *(undefined8 *)(param_1 + 0xc18) = 0;
    *(undefined8 *)(param_1 + 0xc30) = 0;
    *(undefined8 *)(param_1 + 0xc28) = 0;
    *(undefined8 *)(param_1 + 0xc40) = 0;
    *(undefined8 *)(param_1 + 0xc38) = 0;
    *(undefined8 *)(param_1 + 0xc50) = 0;
    *(undefined8 *)(param_1 + 0xc48) = 0;
    *(undefined8 *)(param_1 + 0xc60) = 0;
    *(undefined8 *)(param_1 + 0xc58) = 0;
    *(undefined8 *)(param_1 + 0xc70) = 0;
    *(undefined8 *)(param_1 + 0xc68) = 0;
    *(undefined8 *)(param_1 + 0xc78) = 0;
    uVar9 = 0;
    local_b0 = param_1;
    do {
      if (!bVar5) goto LAB_180029d08;
      if ((ushort)(&DAT_18006f1d0)[uVar9] != 0) {
        DVar6 = FUN_180063470(pHVar4,(LPCWSTR)(ulonglong)(uint)(ushort)(&DAT_18006f1d0)[uVar9],
                              L"RT_CUSTOM");
        puVar10 = FUN_1800634c0(pHVar4,(LPCWSTR)(ulonglong)(ushort)(&DAT_18006f1d0)[uVar9],
                                L"RT_CUSTOM");
        if ((puVar10 == (undefined8 *)0x0) ||
           (plVar11 = *(longlong **)(lVar12 + (ulonglong)uVar8 * 0x18c0 + 0x6b0),
           iVar7 = (**(code **)(*plVar11 + 0x78))(plVar11,puVar10,DVar6,0,puVar3 + uVar9), iVar7 < 0
           )) {
          thunk_FUN_180063700(puVar10);
          bVar5 = false;
        }
        else {
          thunk_FUN_180063700(puVar10);
        }
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar1;
    } while (uVar1 < 0x17);
    param_1 = local_b0;
    if (bVar5) {
LAB_180029d34:
      uVar8 = FUN_1800531e0(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                            (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                            DAT_18006f9c0,3,0x18006f250,0x18006f220,(undefined1 *)(param_1 + 0xc80),
                            param_1 + 0xc98);
      if ((uVar8 & 1) == 0) {
        lVar12 = 0;
        do {
          if ((longlong *)puVar3[lVar12] != (longlong *)0x0) {
            (**(code **)(*(longlong *)puVar3[lVar12] + 0x10))();
            puVar3[lVar12] = 0;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x17);
      }
      else {
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_88 = 0x300000015;
        uStack_80 = 0x300000003;
        local_78 = 0x100000000;
        uStack_70 = 8;
        plVar11 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x140) + 0x3340);
        (**(code **)(*plVar11 + 0xb8))(plVar11,&local_88,param_1 + 0xcb8);
        local_a0 = 0x200000040;
        uStack_98 = 0x1000000000001;
        local_90 = 0x1000000000;
        lVar12 = param_1 + 0xcb0;
        plVar11 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x140) + 0x3340);
        iVar7 = (**(code **)(*plVar11 + 0x18))(plVar11,&local_a0,0);
        if (-1 < iVar7) {
          local_a8[0] = 0;
          local_b0 = CONCAT44(local_b0._4_4_,0x10);
          FUN_1800542d8(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                        *(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),1,lVar12,
                        (longlong *)(param_1 + 0xcb0),(int *)&local_b0,local_a8);
          DAT_18006fa50 = param_1;
          return 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0xcb8) + 0x10))();
        *(undefined8 *)(param_1 + 0xcb8) = 0;
        lVar12 = 0;
        uVar9 = extraout_x1;
        do {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar9;
          auVar13 = auVar13 << 0x40;
          if ((longlong *)puVar3[lVar12] != (longlong *)0x0) {
            auVar13 = (**(code **)(*(longlong *)puVar3[lVar12] + 0x10))();
            puVar3[lVar12] = 0;
          }
          uVar9 = auVar13._8_8_;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x17);
        FUN_180053328(auVar13._0_8_,uVar9,3,param_1 + 0xc80,param_1 + 0xc98);
      }
    }
    else {
LAB_180029d08:
      param_1 = local_b0;
      lVar12 = 0;
      do {
        if ((longlong *)puVar3[lVar12] != (longlong *)0x0) {
          (**(code **)(*(longlong *)puVar3[lVar12] + 0x10))();
          puVar3[lVar12] = 0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x17);
      if (bVar5) goto LAB_180029d34;
    }
    FUN_18002f788((uint *)(param_1 + 0x448));
  }
  FUN_18002f788((uint *)(param_1 + 0x2c8));
LAB_180029ea0:
  FUN_18002f788((uint *)(param_1 + 0x148));
  return 0;
}

