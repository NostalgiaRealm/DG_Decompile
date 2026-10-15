/*
 * _grLfbUnlock@8 at 180002528
 * bool __fastcall _grLfbUnlock@8(undefined4 param_1, ulonglong param_2)
 * Address ranges: 180002528-1800025b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8(undefined4 param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  bool bVar8;
  
                    /* 0x2528  56  _grLfbUnlock@8
                       0x2528  213  grLfbUnlock */
  iVar5 = (int)param_2;
  uVar7 = param_2 & 0xffffffff;
  puVar3 = FUN_180015044();
  bVar8 = false;
  if (puVar3[100] != '\0') {
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar3 + 0x18);
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      uVar4 = (undefined4)plVar1[0x15];
      uVar6 = *(undefined4 *)((longlong)plVar1 + 0xac);
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
    }
    cVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,uVar7 & 0xffffffff,1,0,0,uVar4,uVar6,0);
    bVar8 = cVar2 != '\0';
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + -1;
    UNLOCK();
  }
  return bVar8;
}

