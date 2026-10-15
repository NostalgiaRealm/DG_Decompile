/*
 * FUN_18004ca00 at 18004ca00
 * ulonglong __fastcall FUN_18004ca00(longlong * param_1, ulonglong param_2, int param_3, undefined8 param_4, undefined4 param_5, char param_6)
 * Address ranges: 18004ca00-18004cdad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004ca00(longlong *param_1,ulonglong param_2,int param_3,undefined8 param_4,
                       undefined4 param_5,char param_6)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 extraout_var;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar12;
  int local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  uVar12 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),param_5);
  uVar9 = param_2 & 0xffffffff;
  iVar4 = FUN_18004c79c((longlong)param_1,param_2,param_3,param_4,param_5,param_6);
  uVar5 = CONCAT44(extraout_var,iVar4);
  if (iVar4 != 0) {
    if (iVar4 != 1) {
LAB_18004cd00:
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0xd6] + 8))();
    (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0xd6] + 0x10))();
    local_78 = 4;
    local_80 = 0x1050;
    local_74 = 0x10000;
    local_7c = 2;
    local_6c = 0x1050;
    iVar4 = (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0xd6] + 0x18))
                      ((longlong *)param_1[uVar9 * 0x318 + 0xd6],&local_80,0,
                       param_1 + uVar9 * 0x318 + 0x1d5);
    uVar8 = (uint)param_2;
    if (-1 < iVar4) {
      uVar10 = 4;
      (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0xd6] + 0x108))
                ((longlong *)param_1[uVar9 * 0x318 + 0xd6],4,local_88);
      *(bool *)((longlong)param_1 + 0x67c) = local_88[0] != 0;
      if ((local_88[0] == 0) ||
         (bVar2 = FUN_18004ef4c((longlong)param_1,uVar9,(HMODULE)param_1[0x53],uVar10,uVar12,
                                param_1 + uVar9 * 0x318 + 0x19f), bVar2)) {
        cVar3 = FUN_18004ebd0((longlong)param_1,uVar9,(HMODULE)param_1[0x53],0x2b,0x18006d500,
                              (LPCWSTR)(param_1 + uVar9 * 0x318 + 0x1a3));
        if (cVar3 != '\0') {
          cVar3 = FUN_18004ed40((longlong)param_1,uVar9,(HMODULE)param_1[0x53],2,0x18006d578,
                                0x18006d558,(LPCWSTR)(param_1 + uVar9 * 0x318 + 0x1ce),
                                (longlong)(param_1 + uVar9 * 0x318 + 0x1d0));
          if (cVar3 != '\0') {
            plVar6 = (longlong *)param_1[uVar9 * 0x318 + 0xd6];
            puVar7 = &local_68;
            local_64 = 2;
            local_68 = 0x4000;
            plVar1 = param_1 + uVar9 * 0x318 + 0x1d3;
            local_60 = 1;
            local_5c = 0x10000;
            local_54 = 0x10;
            iVar4 = (**(code **)(*plVar6 + 0x18))(plVar6,puVar7,0,plVar1);
            if (-1 < iVar4) {
              iVar4 = (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0xd6] + 0xb8))
                                ((longlong *)param_1[uVar9 * 0x318 + 0xd6],&DAT_180062e10,
                                 param_1 + uVar9 * 0x318 + 0x1d2);
              if (-1 < iVar4) {
                *(undefined4 *)(param_1 + uVar9 * 0x318 + 0xde) = 0xffffffff;
                param_1[uVar9 * 0x318 + 0xdc] = 0;
                param_1[uVar9 * 0x318 + 0xdd] = 0;
                *(undefined4 *)((longlong)param_1 + uVar9 * 0x18c0 + 0x6f4) = 0;
                param_1[uVar9 * 0x318 + 0xe1] = 0;
                param_1[uVar9 * 0x318 + 0x178] = 0;
                param_1[uVar9 * 0x318 + 0x179] = 0;
                param_1[uVar9 * 0x318 + 0x17a] = 0;
                param_1[uVar9 * 0x318 + 0x17b] = 0;
                FUN_180060f94((undefined1 *)(param_1 + uVar9 * 0x318 + 0xf2),0,0x80);
                FUN_180060f94((undefined1 *)(param_1 + uVar9 * 0x318 + 0x10e),0,0x200);
                uVar5 = 0;
                param_1[uVar9 * 0x318 + 0x170] = 0;
                param_1[uVar9 * 0x318 + 0x171] = 0;
                param_1[uVar9 * 0x318 + 0x172] = 0;
                *(undefined4 *)(param_1 + uVar9 * 0x318 + 0x173) = 0;
                param_1[uVar9 * 0x318 + 0x174] = 0;
                param_1[uVar9 * 0x318 + 0x175] = 0;
                param_1[uVar9 * 0x318 + 0x176] = 0;
                param_1[uVar9 * 0x318 + 0x177] = 0;
                param_1[uVar9 * 0x318 + 0x17c] = 0;
                *(undefined4 *)(param_1 + uVar9 * 0x318 + 0x1d4) = 0;
                param_1[uVar9 * 0x318 + 0x181] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x182) = uVar8;
                param_1[uVar9 * 0x318 + 0x185] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x186) = uVar8;
                param_1[uVar9 * 0x318 + 0x189] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x18a) = uVar8;
                param_1[uVar9 * 0x318 + 0x18d] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x18e) = uVar8;
                param_1[uVar9 * 0x318 + 0x191] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x192) = uVar8;
                param_1[uVar9 * 0x318 + 0x195] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x196) = uVar8;
                param_1[uVar9 * 0x318 + 0x199] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x19a) = uVar8;
                param_1[uVar9 * 0x318 + 0x19d] = (longlong)param_1;
                *(uint *)(param_1 + uVar9 * 0x318 + 0x19e) = uVar8;
                goto LAB_18004cd00;
              }
              puVar7 = (undefined4 *)(param_2 & 0xffffffff);
              plVar6 = param_1;
              FUN_18004f1e0((longlong)param_1,(ulonglong)puVar7,(longlong *)*plVar1);
              *plVar1 = 0;
            }
            FUN_18004eeec(plVar6,puVar7,2,(longlong)(param_1 + uVar9 * 0x318 + 0x1ce),
                          (longlong)(param_1 + uVar9 * 0x318 + 0x1d0));
          }
          lVar11 = 0;
          do {
            if ((longlong *)param_1[uVar9 * 0x318 + lVar11 + 0x1a3] != (longlong *)0x0) {
              (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + lVar11 + 0x1a3] + 0x10))();
              param_1[uVar9 * 0x318 + lVar11 + 0x1a3] = 0;
            }
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x2b);
        }
        lVar11 = 0;
        do {
          if ((longlong *)param_1[uVar9 * 0x318 + lVar11 + 0x19f] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + lVar11 + 0x19f] + 0x10))();
            param_1[uVar9 * 0x318 + lVar11 + 0x19f] = 0;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 4);
      }
      (**(code **)(*(longlong *)param_1[uVar9 * 0x318 + 0x1d5] + 0x10))();
    }
    uVar5 = FUN_18004c970((longlong)param_1,uVar8);
  }
  return uVar5 & 0xffffffffffffff00;
}

