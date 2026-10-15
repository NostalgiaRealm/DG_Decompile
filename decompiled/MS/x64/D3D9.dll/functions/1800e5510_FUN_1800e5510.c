/*
 * FUN_1800e5510 at 1800e5510
 * bool __fastcall FUN_1800e5510(longlong param_1, longlong * param_2, uint param_3, longlong * param_4, int * param_5, uint * param_6, uint param_7, uint param_8)
 * Address ranges: 1800e5510-1800e5685
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800e5510(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,int *param_5,
                  uint *param_6,uint param_7,uint param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_98 [6];
  undefined1 local_80 [64];
  
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2,local_98,&stack0x00000048);
  if (iVar3 < 0) {
    bVar2 = false;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x50))(param_2,local_80);
    iVar3 = *(int *)(lVar5 + 0x20);
    if ((local_98[0] == 4) && (1 < iVar3 - 0x2cU)) {
      local_a8 = 0;
      local_a0 = 0;
      iVar4 = (**(code **)(*param_2 + 0x40))(param_2,param_3,&local_a8,0);
      if (-1 < iVar4) {
        cVar1 = FUN_1800eab50(*(longlong **)(param_1 + 0xb18),(ulonglong)param_2,0);
        if (cVar1 != '\0') {
          (**(code **)(*param_2 + 0x60))(param_2,param_3,param_5,param_6,param_7,param_8);
        }
        (**(code **)(*param_2 + 0x48))(param_2,param_3,0);
        if (cVar1 != '\0') {
          return (bool)cVar1;
        }
      }
    }
    bVar2 = FUN_1800e5468(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          in_stack_ffffffffffffff48,iVar3);
  }
  return bVar2;
}

