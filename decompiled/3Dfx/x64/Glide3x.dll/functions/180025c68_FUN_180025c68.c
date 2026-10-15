/*
 * FUN_180025c68 at 180025c68
 * undefined8 __fastcall FUN_180025c68(longlong param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 180025c68-180025ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180025c68(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8 [2];
  int local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  
  puVar1 = (uint *)(param_1 + 0x148);
  FUN_180060f94((undefined1 *)puVar1,0,0xa80);
  lVar9 = 0;
  do {
    lVar8 = lVar9 * 0x180;
    lVar9 = lVar9 + 1;
    *(undefined8 *)(param_1 + 0x208 + lVar8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3330);
    *(ulonglong *)(param_1 + 0x210 + lVar8) =
         (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338) * 0x18c0 +
         *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330) + 0x6b0;
    *(undefined4 *)(param_1 + 0x148 + lVar8) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3338);
  } while (lVar9 != 7);
  uVar5 = FUN_1800298d8(puVar1,param_2,'\0');
  if ((char)uVar5 != '\0') {
    uVar6 = FUN_1800298d8((uint *)(param_1 + 0x2c8),param_2,'\0');
    if ((char)uVar6 != '\0') {
      bVar11 = *(int *)(*(longlong *)(param_1 + 0x140) + 0xdc) == 2;
      if (bVar11) {
        param_2 = param_3;
      }
      uVar6 = FUN_1800298d8((uint *)(param_1 + 0x448),param_2,bVar11);
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_1800245c8(param_1);
        if ((char)uVar6 != '\0') {
          puVar2 = (undefined8 *)(param_1 + 0xcb8);
          local_60 = 0x300000015;
          uStack_58 = 0x300000003;
          local_50 = 0;
          local_4c = 1;
          local_44 = 0;
          uStack_3c = 0;
          local_48 = 8;
          local_34 = 0;
          plVar3 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x140) + 0x3340);
          (**(code **)(*plVar3 + 0xb8))(plVar3,&local_60,puVar2);
          local_78 = 0x40;
          puVar7 = &local_78;
          local_74 = 2;
          local_70 = 1;
          local_6c = 0x10000;
          local_64 = 0x10;
          plVar3 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x140) + 0x3340);
          plVar10 = (longlong *)(param_1 + 0xcb0);
          iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,puVar7,0);
          if (-1 < iVar4) {
            local_res20[0] = 0x10;
            local_res8[0] = 0;
            uVar6 = FUN_18004f7ec(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),1,
                                  plVar10,(longlong *)(param_1 + 0xcb0),local_res20,local_res8);
            DAT_18006da60 = param_1;
            return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          }
          (**(code **)(*(longlong *)*puVar2 + 0x10))();
          *puVar2 = 0;
          FUN_1800246b0(param_1,puVar7);
        }
        FUN_180029a18((uint *)(param_1 + 0x448));
      }
      FUN_180029a18((uint *)(param_1 + 0x2c8));
    }
    uVar5 = FUN_180029a18(puVar1);
  }
  return uVar5 & 0xffffffffffffff00;
}

