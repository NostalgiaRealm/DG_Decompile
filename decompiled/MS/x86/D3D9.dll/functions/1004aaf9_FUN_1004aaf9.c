/*
 * FUN_1004aaf9 at 1004aaf9
 * undefined __thiscall FUN_1004aaf9(void * this, int param_1, uint * param_2, int param_3, undefined4 * param_4, int param_5, uint param_6, int param_7, byte param_8, undefined1 param_9)
 * Address ranges: 1004aaf9-1004afe6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004aaf9(void *this,int param_1,uint *param_2,int param_3,undefined4 *param_4,int param_5,
            uint param_6,int param_7,byte param_8,undefined1 param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  HANDLE hEvent;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  uint local_8;
  
  cVar4 = *(char *)(*(int *)((int)this + 0xf6bc) + 0x13);
  if (param_1 == 6) {
    if (cVar4 != '\0') goto LAB_1004ab3a;
    cVar4 = '\0';
  }
  else {
    if ((cVar4 == '\0') && (*(int *)((int)*(void **)((int)this + 0xfc78) + 0x1c) == 1)) {
      param_6 = FUN_1004beb3(*(void **)((int)this + 0xfc78),(int)param_4,param_6,param_7);
    }
LAB_1004ab3a:
    cVar4 = '\x01';
  }
  FUN_100491bf(this,(int)param_2,cVar4);
  local_c = (undefined4 *)((uint)param_8 * 2 + 2);
  local_8 = (int)local_c * param_7;
  if (((param_1 == 6) && (*(char *)(*(int *)((int)this + 0xf6bc) + 0x13) == '\0')) &&
     (iVar1 = *(int *)((int)this + 0xf6b8), uVar5 = *(int *)(iVar1 + 0x12d8) - 0x400,
     local_8 < uVar5 || local_8 - uVar5 == 0)) {
    FUN_100ce620((int *)(iVar1 + 0x11c0));
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      if (*param_2 != *(uint *)((int)this + 0xfd04)) {
        *(uint *)((int)this + 0xfd04) = *param_2;
        uVar6 = FUN_10045eba((void *)((int)this + 0xf734),param_2);
        *(undefined4 *)((int)this + 0xfd08) = uVar6;
      }
      bVar11 = *(int *)((int)this + 0xfd0c) != 0;
      iVar1 = *(int *)((int)this + 0xf6b8);
      piVar8 = (int *)(iVar1 + 0x11c0);
      iVar2 = *(int *)((int)this + 0xfd08);
      puVar7 = (undefined4 *)((int)param_4 + (int)local_c * param_6);
      if (*(char *)(iVar1 + 0x12ec) != '\0') {
        uVar5 = local_8 + 3;
        iVar9 = (uVar5 & 0xfffffffc) + 0x28;
        local_c = (undefined4 *)FUN_100ce540(piVar8,iVar9);
        if (local_c != (undefined4 *)0x0) {
          LOCK();
          *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
          UNLOCK();
          local_c[1] = iVar9;
          local_c[3] = this;
          puVar10 = (undefined4 *)((int)local_c + 0x33U & 0xfffffffc);
          local_c[4] = 6;
          local_c[5] = iVar2;
          local_c[6] = param_3;
          local_c[7] = param_5;
          local_c[8] = param_7;
          *(byte *)(local_c + 9) = param_8;
          *(undefined1 *)(local_c + 10) = param_9;
          *(bool *)(local_c + 0xb) = bVar11;
          local_c[2] = puVar10;
          FUN_100cff00(puVar10,puVar7,local_8);
          puVar10 = (undefined4 *)((int)puVar10 + (uVar5 & 0xfffffffc));
          *puVar10 = 0;
          *local_c = FUN_1004afe7;
          piVar8[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar10;
          if (*(char *)(iVar1 + 0x12ed) == '\0') goto LAB_1004ad15;
          hEvent = *(HANDLE *)(iVar1 + 0x1220);
          *piVar8 = 0;
          goto LAB_1004af71;
        }
        FUN_1003971e(piVar8);
      }
      piVar3 = *(int **)(iVar1 + 0x12d0);
      *piVar3 = (int)puVar7;
      piVar3[1] = (int)this;
      piVar3[2] = 6;
      piVar3[3] = iVar2;
      piVar3[4] = param_3;
      piVar3[5] = param_5;
      piVar3[6] = param_7;
      *(byte *)(piVar3 + 7) = param_8;
      *(undefined1 *)(piVar3 + 8) = param_9;
      *(bool *)(piVar3 + 9) = bVar11;
      FUN_1004afe7(piVar3);
LAB_1004ad15:
      *piVar8 = 0;
      return;
    }
    bVar11 = *(int *)((int)this + 0xfd0c) != 0;
    iVar1 = *(int *)((int)this + 0xf6b8);
    piVar8 = (int *)(iVar1 + 0x11c0);
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      puVar7 = (undefined4 *)FUN_100ce540(piVar8,0x2c);
      if (puVar7 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar7[1] = 0x2c;
        puVar7[2] = this;
        puVar7[3] = 6;
        puVar7[4] = param_2;
        puVar7[5] = param_3;
        puVar7[6] = param_4;
        puVar7[7] = param_5;
        puVar7[8] = param_6;
        puVar7[9] = param_7;
        *(byte *)(puVar7 + 10) = param_8;
        *(undefined1 *)(puVar7 + 0xb) = param_9;
        *(bool *)(puVar7 + 0xc) = bVar11;
        puVar10 = (undefined4 *)((int)puVar7 + 0x37U & 0xfffffffc);
        *puVar10 = 0;
        *puVar7 = FUN_1004b046;
        goto LAB_1004af54;
      }
      FUN_1003971e(piVar8);
    }
    puVar7 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar7 = this;
    puVar7[1] = 6;
    puVar7[2] = param_2;
    puVar7[3] = param_3;
    puVar7[4] = param_4;
    puVar7[5] = param_5;
    puVar7[6] = param_6;
    puVar7[7] = param_7;
    *(byte *)(puVar7 + 8) = param_8;
    *(undefined1 *)(puVar7 + 9) = param_9;
    *(bool *)(puVar7 + 10) = bVar11;
    FUN_1004b046(puVar7);
  }
  else {
    iVar1 = *(int *)((int)this + 0xf6b8);
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    FUN_100ce620((int *)(iVar1 + 0x11c0));
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      if (*param_2 != *(uint *)((int)this + 0xfd04)) {
        *(uint *)((int)this + 0xfd04) = *param_2;
        uVar6 = FUN_10045eba((void *)((int)this + 0xf734),param_2);
        *(undefined4 *)((int)this + 0xfd08) = uVar6;
      }
      uVar5 = local_8;
      param_2 = *(uint **)((int)this + 0xfd08);
      if (((param_2 != (uint *)0x0) && (param_1 == 6)) &&
         ((*(char *)(*(int *)((int)this + 0xf6bc) + 0x13) == '\0' &&
          (bVar11 = FUN_100c245a((void *)(*(int *)((int)this + 0xf6b8) + 0x14f0),local_8,
                                 (int *)&local_18), puVar7 = local_18, bVar11)))) {
        FUN_100cff00(local_18,(undefined4 *)((int)param_4 + (int)local_c * param_6),uVar5);
        param_4 = puVar7;
        param_6 = 0;
      }
    }
    bVar11 = *(int *)((int)this + 0xfd0c) != 0;
    iVar1 = *(int *)((int)this + 0xf6b8);
    piVar8 = (int *)(iVar1 + 0x11c0);
    if (*(char *)(iVar1 + 0x12ec) != '\0') {
      puVar7 = (undefined4 *)FUN_100ce540(piVar8,0x38);
      if (puVar7 != (undefined4 *)0x0) {
        LOCK();
        *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
        UNLOCK();
        puVar7[1] = 0x38;
        puVar7[2] = this;
        puVar7[3] = param_1;
        puVar7[4] = param_2;
        puVar7[5] = param_3;
        puVar7[6] = param_4;
        puVar7[7] = param_5;
        puVar7[8] = param_6;
        puVar7[9] = param_7;
        *(byte *)(puVar7 + 10) = param_8;
        *(undefined1 *)(puVar7 + 0xb) = param_9;
        *(bool *)(puVar7 + 0xc) = bVar11;
        puVar7[0xd] = local_18;
        puVar7[0xe] = local_14;
        puVar7[0xf] = local_10;
        puVar10 = (undefined4 *)((int)puVar7 + 0x43U & 0xfffffffc);
        *puVar10 = 0;
        *puVar7 = FUN_1004b15b;
LAB_1004af54:
        piVar8[piVar8[0x49] * 5 + 0x1a] = (int)puVar10;
        if (*(char *)((int)piVar8 + 0x12d) != '\0') {
          *piVar8 = 0;
          hEvent = (HANDLE)piVar8[0x18];
LAB_1004af71:
          SetEvent(hEvent);
          return;
        }
        goto LAB_1004afda;
      }
      FUN_1003971e(piVar8);
    }
    puVar7 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar7 = this;
    puVar7[1] = param_1;
    puVar7[2] = param_2;
    puVar7[3] = param_3;
    puVar7[4] = param_4;
    puVar7[5] = param_5;
    puVar7[6] = param_6;
    puVar7[7] = param_7;
    *(byte *)(puVar7 + 8) = param_8;
    *(undefined1 *)(puVar7 + 9) = param_9;
    *(bool *)(puVar7 + 10) = bVar11;
    puVar7[0xb] = local_18;
    puVar7[0xc] = local_14;
    puVar7[0xd] = local_10;
    FUN_1004b15b(puVar7);
  }
LAB_1004afda:
  *piVar8 = 0;
  return;
}

