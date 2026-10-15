/*
 * FUN_1800f9f10 at 1800f9f10
 * undefined FUN_1800f9f10(void)
 * Address ranges: 1800f9f10-1800fa117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f9f10(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  lVar11 = param_1 + (ulonglong)uVar3 * 0x1ac0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,&DAT_18023c540,param_2 + 0xd80);
  }
  uVar4 = (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x120))();
  *(undefined4 *)(param_2 + 0xd78) = uVar4;
  iVar5 = FUN_1800e7220(*(undefined8 *)(lVar11 + 0x2238),2);
  *(int *)(param_2 + 0xd98) = iVar5;
  if (iVar5 != -1) {
    local_50 = 0;
    local_48 = 0;
    uVar10 = 0;
    local_58 = *(undefined4 *)(&DAT_180232e48 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_54 = 4;
    do {
      iVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                        (*(longlong **)(param_2 + 8),uVar10,&DAT_180235458,
                         param_2 + uVar10 * 8 + 0xd88);
      iVar9 = (int)uVar10;
      if (iVar5 < 0) {
        if (iVar9 == 0) {
          uVar3 = *(uint *)(param_2 + 0xd98);
          if (uVar3 != 0xffffffff) {
            lVar11 = *(longlong *)(lVar11 + 0x2238);
            (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar11 + 0x28);
            uVar2 = uVar3 & 0xffff;
            uVar1 = uVar2 + 2;
            if (uVar2 < uVar1) {
              lVar8 = *(longlong *)
                       (*(longlong *)(lVar11 + 0x50) + (ulonglong)(uVar3 >> 0x10) * 0x10 + 8);
              do {
                uVar10 = -1L << ((ulonglong)uVar2 & 0x3f);
                uVar3 = (uVar2 & 0xffffffc0) + 0x40;
                if (uVar1 < uVar3) {
                  uVar10 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar10;
                }
                *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) =
                     *(ulonglong *)(lVar8 + (ulonglong)(uVar2 >> 6) * 8) &
                     (uVar10 ^ 0xffffffffffffffff);
                uVar2 = uVar3;
              } while (uVar3 < uVar1);
            }
            (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar11 + 0x28);
          }
          *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
          return 0;
        }
        do {
          (**(code **)(**(longlong **)(param_2 + (ulonglong)(iVar9 - 1) * 8 + 0xd88) + 0x10))();
        } while( true );
      }
      FUN_1800e7b48(*(undefined8 *)(lVar11 + 0x2238),&local_60,*(undefined4 *)(param_2 + 0xd98),
                    uVar10);
      plVar7 = *(longlong **)(param_1 + (ulonglong)uVar3 * 0x20 + 0x6d0);
      (**(code **)(*plVar7 + 0xa0))
                (plVar7,*(undefined8 *)(param_2 + 0xd88 + uVar10 * 8),&local_58,local_60);
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 2);
    FUN_1800f9950(param_1,param_2,param_3);
  }
  return 1;
}

