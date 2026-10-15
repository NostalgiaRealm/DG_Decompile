/*
 * FUN_18005ce98 at 18005ce98
 * undefined8 __cdecl FUN_18005ce98(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18005ce98-18005d09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005ce98(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  lVar11 = param_1 + (ulonglong)uVar2 * 0x1ac0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,&DAT_180066228,param_2 + 0xd80);
  }
  uVar3 = (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x120))();
  *(undefined4 *)(param_2 + 0xd78) = uVar3;
  uVar4 = FUN_180049ac8(*(longlong *)(lVar11 + 0x2238),2);
  *(uint *)(param_2 + 0xd98) = uVar4;
  if (uVar4 != 0xffffffff) {
    local_50 = 0;
    local_48 = 0;
    uVar10 = 0;
    local_58 = *(undefined4 *)(&DAT_1800621b8 + (longlong)*(int *)(param_2 + 0x34) * 4);
    uStack_54 = 4;
    do {
      iVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                        (*(longlong **)(param_2 + 8),uVar10,&DAT_180063c58,
                         param_2 + uVar10 * 8 + 0xd88);
      iVar9 = (int)uVar10;
      if (iVar5 < 0) {
        if (iVar9 == 0) {
          uVar2 = *(uint *)(param_2 + 0xd98);
          if (uVar2 != 0xffffffff) {
            lVar11 = *(longlong *)(lVar11 + 0x2238);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
            uVar1 = uVar2 & 0xffff;
            uVar4 = uVar1 + 2;
            if (uVar1 < uVar4) {
              lVar8 = *(longlong *)
                       (*(longlong *)(lVar11 + 0x50) + (ulonglong)(uVar2 >> 0x10) * 0x10 + 8);
              do {
                uVar10 = -1L << ((ulonglong)uVar1 & 0x3f);
                uVar2 = (uVar1 & 0xffffffc0) + 0x40;
                if (uVar4 < uVar2) {
                  uVar10 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar4 & 0x3f) & uVar10;
                }
                *(ulonglong *)(lVar8 + (ulonglong)(uVar1 >> 6) * 8) =
                     *(ulonglong *)(lVar8 + (ulonglong)(uVar1 >> 6) * 8) &
                     (uVar10 ^ 0xffffffffffffffff);
                uVar1 = uVar2;
              } while (uVar2 < uVar4);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
          }
          *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
          return 0;
        }
        do {
          (**(code **)(**(longlong **)(param_2 + (ulonglong)(iVar9 - 1) * 8 + 0xd88) + 0x10))();
        } while( true );
      }
      FUN_18004a3f8(*(longlong *)(lVar11 + 0x2238),&local_60,*(uint *)(param_2 + 0xd98),iVar9);
      plVar7 = *(longlong **)(param_1 + (ulonglong)uVar2 * 0x20 + 0x6d0);
      (**(code **)(*plVar7 + 0xa0))
                (plVar7,*(undefined8 *)(param_2 + 0xd88 + uVar10 * 8),&local_58,local_60);
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 2);
    FUN_18005c8d8(param_1,param_2,param_3);
  }
  return 1;
}

