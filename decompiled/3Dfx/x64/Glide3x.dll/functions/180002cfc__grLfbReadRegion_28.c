/*
 * _grLfbReadRegion@28 at 180002cfc
 * bool __fastcall _grLfbReadRegion@28(int param_1, uint param_2, uint param_3, int param_4, int param_5, undefined4 param_6, undefined8 param_7)
 * Address ranges: 180002cfc-180002de0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbReadRegion_28(int param_1,uint param_2,uint param_3,int param_4,int param_5,
                        undefined4 param_6,undefined8 param_7)

{
  longlong *plVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  uint local_34 [3];
  
  iVar4 = param_1;
                    /* 0x2cfc  53  _grLfbReadRegion@28
                       0x2cfc  153  grLfbReadRegion */
  puVar3 = FUN_1800069ac();
  cVar2 = '\0';
  if (puVar3[100] != '\0') {
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar3 + 0x18);
    local_38 = 0;
    local_34[0] = 0;
    cVar2 = '\0';
    FUN_18000ad08((longlong)plVar1,iVar4,&local_38,local_34);
    if (((param_2 < local_38) && (param_3 < local_34[0])) &&
       (uVar5 = param_2 + param_4, param_2 < uVar5)) {
      if (local_38 < uVar5) {
        uVar5 = local_38;
      }
      uVar6 = param_5 + param_3;
      if (param_3 < uVar6) {
        if (local_34[0] < uVar6) {
          uVar6 = local_34[0];
        }
        cVar2 = (**(code **)(*plVar1 + 0x120))
                          (plVar1,param_1,param_2,param_3,uVar5 - param_2,uVar6 - param_3,param_6,
                           param_7);
      }
    }
    LOCK();
    *(int *)(puVar3 + 0x60) = *(int *)(puVar3 + 0x60) + -1;
    UNLOCK();
  }
  return cVar2 != '\0';
}

