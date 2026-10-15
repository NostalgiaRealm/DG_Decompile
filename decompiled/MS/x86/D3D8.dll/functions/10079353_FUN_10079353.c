/*
 * FUN_10079353 at 10079353
 * int * __thiscall FUN_10079353(void * this, int * param_1, void * param_2, byte param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10079353-10079590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall
FUN_10079353(void *this,int *param_1,void *param_2,byte param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  void *local_24;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar2 = *(uint *)((int)this + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pvVar3 = (void *)0x1;
  pvVar7 = (void *)(*(uint *)((int)this + 4) >> (param_3 & 0x1f));
  if (pvVar7 == (void *)0x0) {
    pvVar7 = pvVar3;
  }
  pvVar5 = (void *)(uVar1 >> (param_3 & 0x1f));
  if (pvVar5 == (void *)0x0) {
    pvVar5 = pvVar3;
  }
  pvVar4 = (void *)(uVar2 >> (param_3 & 0x1f));
  if (pvVar4 == (void *)0x0) {
    pvVar4 = pvVar3;
  }
  local_14 = pvVar4;
  local_8 = pvVar5;
  _param_3 = FUN_100ad4a9((int)pvVar4 * (int)pvVar5 * (int)pvVar7 * 4);
  if (_param_3 != 0) {
    param_1[2] = (int)pvVar5;
    *param_1 = _param_3;
    local_c = 0;
    local_10 = 0;
    uVar1 = *(uint *)((int)this + 0x10);
    local_1c = 0;
    local_18 = 0;
    param_1[1] = (int)pvVar7;
    param_1[3] = (int)pvVar4;
    FUN_10078150(param_2,&local_c,&local_10,&local_1c,&local_18,uVar1);
    iVar6 = *(int *)(&DAT_100b04f0 + uVar1 * 4);
    if (iVar6 == 8) {
      local_24 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        do {
          iVar6 = (int)local_24 * param_6 + param_4;
          if (local_8 != (void *)0x0) {
            pvVar3 = local_8;
            do {
              pvVar5 = (void *)0x0;
              if (pvVar7 != (void *)0x0) {
                do {
                  *(undefined4 *)(_param_3 + (int)pvVar5 * 4) =
                       *(undefined4 *)(local_c + (uint)*(byte *)((int)pvVar5 + iVar6) * 4);
                  pvVar5 = (void *)((int)pvVar5 + 1);
                } while (pvVar5 < pvVar7);
              }
              iVar6 = iVar6 + param_5;
              _param_3 = _param_3 + (int)pvVar7 * 4;
              pvVar3 = (void *)((int)pvVar3 - 1);
              pvVar4 = local_14;
            } while (pvVar3 != (void *)0x0);
          }
          local_24 = (void *)((int)local_24 + 1);
        } while (local_24 < pvVar4);
      }
    }
    else if (iVar6 == 0x10) {
      local_24 = (void *)0x0;
      if (pvVar4 != (void *)0x0) {
        do {
          iVar6 = (int)local_24 * param_6 + param_4;
          for (pvVar3 = local_8; pvVar3 != (void *)0x0; pvVar3 = (void *)((int)pvVar3 - 1)) {
            pvVar5 = (void *)0x0;
            if (pvVar7 != (void *)0x0) {
              do {
                *(uint *)(_param_3 + (int)pvVar5 * 4) =
                     *(uint *)(local_10 + (uint)*(byte *)(iVar6 + 1 + (int)pvVar5 * 2) * 4) |
                     *(uint *)(local_c + (uint)*(byte *)(iVar6 + (int)pvVar5 * 2) * 4);
                pvVar5 = (void *)((int)pvVar5 + 1);
              } while (pvVar5 < pvVar7);
            }
            iVar6 = iVar6 + param_5;
            _param_3 = _param_3 + (int)pvVar7 * 4;
            pvVar4 = local_14;
          }
          local_24 = (void *)((int)local_24 + 1);
        } while (local_24 < pvVar4);
      }
    }
    else if ((iVar6 == 0x20) && (local_24 = (void *)0x0, pvVar4 != (void *)0x0)) {
      do {
        iVar6 = (int)local_24 * param_6 + param_4;
        for (pvVar3 = local_8; pvVar3 != (void *)0x0; pvVar3 = (void *)((int)pvVar3 - 1)) {
          param_2 = (void *)0x0;
          if (pvVar7 != (void *)0x0) {
            do {
              *(uint *)(_param_3 + (int)param_2 * 4) =
                   *(uint *)(local_18 + (uint)*(byte *)(iVar6 + 3 + (int)param_2 * 4) * 4) |
                   *(uint *)(local_1c + (uint)*(byte *)(iVar6 + 2 + (int)param_2 * 4) * 4) |
                   *(uint *)(local_10 + (uint)*(byte *)(iVar6 + 1 + (int)param_2 * 4) * 4) |
                   *(uint *)(local_c + (uint)*(byte *)(iVar6 + (int)param_2 * 4) * 4);
              param_2 = (void *)((int)param_2 + 1);
            } while (param_2 < pvVar7);
          }
          iVar6 = iVar6 + param_5;
          _param_3 = _param_3 + (int)pvVar7 * 4;
          pvVar4 = local_14;
        }
        local_24 = (void *)((int)local_24 + 1);
      } while (local_24 < pvVar4);
    }
  }
  return param_1;
}

