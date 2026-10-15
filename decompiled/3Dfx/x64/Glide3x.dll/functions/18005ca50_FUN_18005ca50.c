/*
 * FUN_18005ca50 at 18005ca50
 * undefined8 __fastcall FUN_18005ca50(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18005ca50-18005cbe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005ca50(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_var;
  undefined8 uVar7;
  undefined8 extraout_RAX;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_res8 [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar3 = *(undefined8 **)(param_2 + 8);
  lVar11 = (ulonglong)uVar2 * 0x1ac0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,&DAT_1800674a8,(undefined8 *)(param_2 + 0xd80));
  }
  uVar5 = (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x120))();
  *(undefined4 *)(param_2 + 0xd78) = uVar5;
  uVar6 = FUN_180048dac(*(longlong *)(lVar11 + 0x2238 + param_1),2);
  uVar7 = CONCAT44(extraout_var,uVar6);
  *(uint *)(param_2 + 0xd98) = uVar6;
  uVar8 = 1;
  if (uVar6 != 0xffffffff) {
    local_64 = 4;
    uVar10 = 0;
    local_60 = 0;
    local_68 = *(undefined4 *)(&DAT_180063050 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_58 = 0;
    do {
      lVar1 = param_2 + uVar10 * 8;
      iVar9 = (int)uVar10;
      uVar7 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                        (*(longlong **)(param_2 + 8),uVar10,&DAT_180063a80,lVar1 + 0xd88);
      if ((int)uVar7 < 0) {
        if (iVar9 != 0) {
          do {
            (**(code **)(**(longlong **)(param_2 + 0xd88 + (ulonglong)(iVar9 - 1) * 8) + 0x10))();
          } while( true );
        }
        uVar2 = *(uint *)(param_2 + 0xd98);
        if (uVar2 != 0xffffffff) {
          lVar11 = *(longlong *)(lVar11 + 0x2238 + param_1);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
          FUN_180048b44(lVar11,uVar2,2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
          uVar7 = extraout_RAX;
        }
        *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
        uVar8 = 0;
        goto LAB_18005cbd4;
      }
      FUN_1800493ac(*(longlong *)(lVar11 + 0x2238 + param_1),local_res8,*(uint *)(param_2 + 0xd98),
                    iVar9);
      plVar4 = *(longlong **)(param_1 + 0x6d0 + (ulonglong)uVar2 * 0x20);
      (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined8 *)(lVar1 + 0xd88),&local_68,local_res8[0]);
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 2);
    uVar7 = FUN_18005c4ac(param_1,param_2,param_3);
  }
LAB_18005cbd4:
  return CONCAT71((int7)((ulonglong)uVar7 >> 8),uVar8);
}

