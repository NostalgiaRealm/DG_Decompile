/*
 * FUN_1002dd2d at 1002dd2d
 * int __thiscall FUN_1002dd2d(void * this, uint param_1, uint param_2, int * param_3, int * param_4, char param_5)
 * Address ranges: 1002dd2d-1002df29
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002dd2d(void *this,uint param_1,uint param_2,int *param_3,int *param_4,char param_5)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  char cStack00000017;
  uint local_28 [4];
  int local_18;
  int *local_14;
  uint local_10;
  int local_c;
  
  iVar7 = 0;
  local_18 = 0;
  if (*(int *)((int)this + 0x24) == 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      iVar7 = (**(code **)(**(int **)((int)this + 0x50) + 0x2c))
                        (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),param_1
                         ,param_2,param_3,param_4);
    }
    else {
      FUN_1002d00c((int)this);
      cVar4 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                        (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
      if (cVar4 != '\0') {
        bVar5 = FUN_1002d250(this,(uint)*(byte *)((int)this + 0x48));
        iVar7 = (uint)(bVar5 ^ 1) * 2;
        (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                  (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
        *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
        *(undefined1 *)((int)this + 0xae) = 0;
      }
      *param_3 = *(int *)((int)this + 0x20);
      *param_4 = *(int *)((int)this + 0x10);
    }
  }
  else {
    piVar1 = (int *)((int)this + 0x24);
    local_14 = piVar1;
    cVar4 = (**(code **)(**(int **)((int)this + 0x50) + 0x14))
                      (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70));
    if (cVar4 != '\0') {
      (**(code **)(**(int **)((int)this + 0x50) + 0x18))
                (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),0);
      if (*piVar1 != 0) {
        puVar8 = *(undefined4 **)((int)this + 0x28);
        for (uVar6 = *(uint *)((int)this + 0x2c) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar9 = (undefined1 *)
                 (*(int *)((int)this + 0x28) + (*(uint *)((int)this + 0x2c) & 0xfffffffc));
        for (uVar6 = *(uint *)((int)this + 0x2c) & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      *(undefined1 *)((int)this + 0xae) = 0;
      piVar1 = local_14;
    }
    local_14 = piVar1;
    *param_3 = *(int *)((int)this + 0x20);
    *param_4 = *(int *)((int)this + 0x10);
    if (param_5 != '\0') {
      cVar4 = '\0';
      param_1 = 0x80808080;
      local_10 = 0;
      param_2 = 0;
      cStack00000017 = '\0';
      local_c = 0;
      uVar6 = (uint)*(ushort *)((int)this + 0xc) * *(int *)((int)this + 0x14) + 0xfff >> 0xc;
      if (uVar6 != 0) {
        do {
          uVar3 = local_10;
          bVar5 = (byte)param_1;
          if ((*(byte *)(local_c + *(int *)((int)this + 0x28)) & bVar5) != 0) {
            if (local_10 != param_2) {
              if (cVar4 == '\0') {
                FUN_1002d00c((int)this);
                cStack00000017 = '\x01';
              }
              FUN_1002d2e6(this,local_28,uVar3,param_2);
              (**(code **)(*(int *)this + 0x18))(local_28);
              local_10 = param_2;
              cVar4 = cStack00000017;
            }
            local_10 = local_10 + 1;
          }
          uVar3 = local_10;
          pbVar2 = (byte *)(local_c + *(int *)((int)this + 0x28));
          *pbVar2 = *pbVar2 | bVar5;
          *(byte *)(local_c + *local_14) = *(byte *)(local_c + *local_14) | bVar5;
          local_c = local_c + (param_1 & 1);
          param_2 = param_2 + 1;
          param_1 = param_1 >> 1 | (uint)((param_1 & 1) != 0) << 0x1f;
        } while (param_2 < uVar6);
        if (local_10 != param_2) {
          if (cVar4 == '\0') {
            FUN_1002d00c((int)this);
          }
          FUN_1002d2e6(this,local_28,uVar3,param_2);
          (**(code **)(*(int *)this + 0x18))(local_28);
        }
      }
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
      iVar7 = local_18;
    }
    *param_3 = *(int *)((int)this + 0x20);
    *param_4 = *(int *)((int)this + 0x10);
  }
  return iVar7;
}

