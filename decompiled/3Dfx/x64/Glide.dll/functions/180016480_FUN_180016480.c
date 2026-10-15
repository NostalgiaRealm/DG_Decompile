/*
 * FUN_180016480 at 180016480
 * undefined __fastcall FUN_180016480(longlong param_1, undefined8 * param_2, char param_3)
 * Address ranges: 180016480-18001658b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180016480(longlong param_1,undefined8 *param_2,char param_3)

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
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b8))();
      lVar6 = 2;
      puVar2 = param_2;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf0);
      do {
        puVar5 = puVar3;
        puVar4 = puVar2;
        uVar1 = puVar4[1];
        *puVar5 = *puVar4;
        puVar5[1] = uVar1;
        uVar1 = puVar4[3];
        puVar5[2] = puVar4[2];
        puVar5[3] = uVar1;
        uVar1 = puVar4[5];
        puVar5[4] = puVar4[4];
        puVar5[5] = uVar1;
        uVar1 = puVar4[7];
        puVar5[6] = puVar4[6];
        puVar5[7] = uVar1;
        uVar1 = puVar4[9];
        puVar5[8] = puVar4[8];
        puVar5[9] = uVar1;
        uVar1 = puVar4[0xb];
        puVar5[10] = puVar4[10];
        puVar5[0xb] = uVar1;
        uVar1 = puVar4[0xd];
        puVar5[0xc] = puVar4[0xc];
        puVar5[0xd] = uVar1;
        uVar1 = puVar4[0xf];
        puVar5[0xe] = puVar4[0xe];
        puVar5[0xf] = uVar1;
        lVar6 = lVar6 + -1;
        puVar2 = puVar4 + 0x10;
        puVar3 = puVar5 + 0x10;
      } while (lVar6 != 0);
      uVar1 = puVar4[0x11];
      iVar7 = 0;
      puVar5[0x10] = puVar4[0x10];
      puVar5[0x11] = uVar1;
      uVar1 = puVar4[0x13];
      puVar5[0x12] = puVar4[0x12];
      puVar5[0x13] = uVar1;
      uVar1 = puVar4[0x15];
      puVar5[0x14] = puVar4[0x14];
      puVar5[0x15] = uVar1;
      *(undefined8 *)((longlong)puVar5 + 0xad) = *(undefined8 *)((longlong)puVar4 + 0xad);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          FUN_180017e24(param_1,iVar7,'\x01');
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
      FUN_1800162d4(param_1);
      if (param_3 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1c8))
                  (*(longlong **)(param_1 + 0x18),(longlong)param_2 + 0x135);
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

