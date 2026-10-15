/*
 * FUN_100419b7 at 100419b7
 * uint __thiscall FUN_100419b7(void * this, uint param_1, int * param_2, int * param_3)
 * Address ranges: 100419b7-10041c4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100419b7(void *this,uint param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  void *pvVar8;
  uint *puVar9;
  BOOL BVar10;
  undefined4 uVar11;
  uint uVar12;
  ushort in_FPUControlWord;
  uint local_1c;
  void *local_18;
  int local_14;
  uint local_10;
  uint *local_c;
  uint local_8;
  
  local_18 = this;
  BVar10 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar10 == 0) {
    FUN_1003c603();
  }
  local_c = &local_1c;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_1c = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_1c = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar12 = 0x80070057;
  if (7 < param_1) goto LAB_10041a9a;
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    if (*(char *)((int)this + 0x224) == '\0') {
      (**(code **)(**(int **)((int)this + 0x14) + 0x74))(param_1,0,0,0,0,0,0);
      piVar4 = *(int **)((int)this + param_1 * 4 + 0x14f4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *(undefined4 *)((int)this + param_1 * 4 + 0x14d4) = 0;
      *(undefined4 *)((int)this + param_1 * 4 + 0x14f4) = 0;
      *(uint *)((int)this + 0x934) =
           *(uint *)((int)this + 0x934) |
           (uint)(*(char *)(param_1 + 0x8f4 + (int)this) != '\0') << ((byte)param_1 & 0x1f);
      *(undefined1 *)(param_1 + 0x8f4 + (int)this) = 0;
      *(undefined1 *)(param_1 + 0x8fc + (int)this) = 0;
      uVar12 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
      piVar4 = *(int **)(iVar3 + 0x9fc + param_1 * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      *(undefined4 *)(iVar3 + 0x9fc + param_1 * 4) = 0;
      *(undefined4 *)(iVar3 + 0x9dc + param_1 * 4) = 0;
      pbVar7 = (byte *)(iVar3 + 0xa50 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
      *pbVar7 = *pbVar7 | '\x01' << (param_1 & 7);
      uVar12 = local_8;
    }
    goto LAB_10041a9a;
  }
  local_c = (uint *)(**(code **)(*param_2 + 0x38))();
  uVar12 = local_8;
  if ((local_c[0x1a] & 0x1000) == 0) goto LAB_10041a9a;
  if (*(char *)((int)this + 0x224) != '\0') {
    (**(code **)(*param_3 + 4))(param_3);
    iVar3 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    piVar4 = *(int **)(iVar3 + 0x9fc + param_1 * 4);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))(piVar4);
    }
    *(int **)(iVar3 + 0x9fc + param_1 * 4) = param_3;
    *(int **)(iVar3 + 0x9dc + param_1 * 4) = param_2;
    pbVar7 = (byte *)(iVar3 + 0xa50 + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar7 = *pbVar7 | '\x01' << (param_1 & 7);
    uVar12 = local_8;
    goto LAB_10041a9a;
  }
  if (param_2 == *(int **)((int)this + param_1 * 4 + 0x14d4)) goto LAB_10041a9a;
  (**(code **)(*param_3 + 4))(param_3);
  puVar9 = local_c;
  if ((local_c[1] & 0x10000) == 0) {
LAB_10041aef:
    local_c = (uint *)((uint)local_c & 0xffffff00);
  }
  else {
    puVar1 = local_c + 0x13;
    local_c = (uint *)CONCAT31(local_c._1_3_,1);
    if ((*puVar1 & 4) != 0) goto LAB_10041aef;
  }
  local_10 = puVar9[0x10];
  uVar5 = *(undefined4 *)(param_2[1] + 0x50);
  uVar6 = *(undefined4 *)(param_2[1] + 0x6c);
  local_14 = **(int **)((int)this + 0x14);
  uVar11 = (**(code **)(*param_2 + 0x3c))(local_c,0);
  (**(code **)(local_14 + 0x74))(param_1,uVar6,uVar5,local_10,uVar11);
  (**(code **)(*param_2 + 0x38))();
  pvVar8 = local_18;
  *(byte *)((int)local_18 + 0x930) = *(byte *)((int)local_18 + 0x930) | 1;
  *(undefined1 *)(param_1 + 0x8fc + (int)local_18) = 0;
  piVar4 = *(int **)((int)local_18 + param_1 * 4 + 0x14f4);
  *(int **)((int)local_18 + param_1 * 4 + 0x14d4) = param_2;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(int **)((int)pvVar8 + param_1 * 4 + 0x14f4) = param_3;
  cVar2 = *(char *)(param_1 + 0x8f4 + (int)pvVar8);
  *(undefined1 *)((int)pvVar8 + 0xa89) = 1;
  *(uint *)((int)pvVar8 + 0x934) =
       *(uint *)((int)pvVar8 + 0x934) | (uint)(cVar2 == '\0') << ((byte)param_1 & 0x1f);
  *(undefined1 *)(param_1 + 0x8f4 + (int)pvVar8) = 1;
  *(uint *)((int)pvVar8 + 0x938) = *(uint *)((int)pvVar8 + 0x938) | 1 << (param_1 & 0x1f);
  uVar12 = local_8;
LAB_10041a9a:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar12;
}

