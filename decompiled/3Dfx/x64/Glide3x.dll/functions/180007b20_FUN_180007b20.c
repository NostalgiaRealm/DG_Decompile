/*
 * FUN_180007b20 at 180007b20
 * undefined __fastcall FUN_180007b20(longlong param_1, undefined8 * param_2, char param_3)
 * Address ranges: 180007b20-180007c84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180007b20(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1d8))();
      lVar6 = 3;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0);
      puVar3 = param_2;
      do {
        puVar5 = puVar3;
        puVar4 = puVar2;
        uVar1 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar1;
        uVar1 = puVar5[3];
        puVar4[2] = puVar5[2];
        puVar4[3] = uVar1;
        uVar1 = puVar5[5];
        puVar4[4] = puVar5[4];
        puVar4[5] = uVar1;
        uVar1 = puVar5[7];
        puVar4[6] = puVar5[6];
        puVar4[7] = uVar1;
        uVar1 = puVar5[9];
        puVar4[8] = puVar5[8];
        puVar4[9] = uVar1;
        uVar1 = puVar5[0xb];
        puVar4[10] = puVar5[10];
        puVar4[0xb] = uVar1;
        uVar1 = puVar5[0xd];
        puVar4[0xc] = puVar5[0xc];
        puVar4[0xd] = uVar1;
        uVar1 = puVar5[0xf];
        puVar4[0xe] = puVar5[0xe];
        puVar4[0xf] = uVar1;
        lVar6 = lVar6 + -1;
        puVar2 = puVar4 + 0x10;
        puVar3 = puVar5 + 0x10;
      } while (lVar6 != 0);
      uVar1 = puVar5[0x11];
      iVar7 = 0;
      puVar4[0x10] = puVar5[0x10];
      puVar4[0x11] = uVar1;
      uVar1 = puVar5[0x13];
      puVar4[0x12] = puVar5[0x12];
      puVar4[0x13] = uVar1;
      uVar1 = *(undefined8 *)((longlong)puVar5 + 0xa7);
      *(undefined8 *)((longlong)puVar4 + 0x9f) = *(undefined8 *)((longlong)puVar5 + 0x9f);
      *(undefined8 *)((longlong)puVar4 + 0xa7) = uVar1;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          FUN_180006824(param_1,iVar7,'\x01');
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_18000791c(param_1);
      if (param_3 == '\0') {
        _DAT_18006d9f0 = *(undefined8 *)((longlong)param_2 + 0x1af);
        _DAT_18006d9f8 = *(undefined8 *)((longlong)param_2 + 0x1b7);
        _DAT_18006da00 = *(undefined8 *)((longlong)param_2 + 0x1bf);
        _DAT_18006da08 = *(undefined8 *)((longlong)param_2 + 0x1c7);
        _DAT_18006da10 = *(undefined8 *)((longlong)param_2 + 0x1cf);
        _DAT_18006da18 = *(undefined8 *)((longlong)param_2 + 0x1d7);
        _DAT_18006da20 = *(undefined8 *)((longlong)param_2 + 0x1df);
        _DAT_18006da28 = *(undefined8 *)((longlong)param_2 + 0x1e7);
        _DAT_18006da30 = *(undefined8 *)((longlong)param_2 + 0x1ef);
        _DAT_18006da38 = *(undefined8 *)((longlong)param_2 + 0x1f7);
        _DAT_18006da40 = *(undefined4 *)((longlong)param_2 + 0x1ff);
        _DAT_18006da44 = *(undefined4 *)((longlong)param_2 + 0x203);
        _DAT_18006da48 = *(undefined4 *)((longlong)param_2 + 0x207);
        _DAT_18006da4c = *(undefined4 *)((longlong)param_2 + 0x20b);
        _DAT_18006da50 = *(undefined4 *)((longlong)param_2 + 0x20f);
        _DAT_18006da54 = *(undefined4 *)((longlong)param_2 + 0x213);
        _DAT_18006da58 = *(undefined4 *)((longlong)param_2 + 0x217);
        _DAT_18006da5c = *(undefined4 *)((longlong)param_2 + 0x21b);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e8))
                  (*(longlong **)(param_1 + 0x18),(longlong)param_2 + 0x21f);
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

