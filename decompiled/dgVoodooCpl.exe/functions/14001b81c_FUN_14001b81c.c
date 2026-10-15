/*
 * FUN_14001b81c at 14001b81c
 * undefined1 __fastcall FUN_14001b81c(uint * param_1, longlong * param_2, char * param_3, undefined8 * param_4)
 * Address ranges: 14001b81c-14001b9e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_14001b81c(uint *param_1,longlong *param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined8 *local_res20;
  LPVOID local_48;
  undefined8 local_40;
  CHAR local_38 [16];
  
  uVar12 = 0;
  local_res20 = param_4;
  puVar4 = (undefined8 *)thunk_FUN_14002423c(0x1000);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = FUN_140024d20(param_3);
    pcVar6 = (char *)thunk_FUN_14002423c((ulonglong)(uint)((int)lVar5 * 2));
    if (pcVar6 != (char *)0x0) {
      local_48 = (LPVOID)0x0;
      local_40 = 0;
      local_res20 = puVar4;
      FUN_14001b9ec((longlong *)&local_48,&local_res20);
      FUN_140024290(local_38,"0x%x",0x287,param_4);
      puVar7 = (undefined8 *)FUN_140019e4c(puVar4,local_38);
      puVar7 = (undefined8 *)FUN_14001a148(param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)
               FUN_14001a438((longlong)param_1,puVar7,(longlong *)&local_48,(ulonglong)param_4);
      puVar7 = (undefined8 *)FUN_14001a8e0((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)FUN_14001ab9c((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)FUN_14001ac60((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      puVar7 = (undefined8 *)
               FUN_14001afe8((longlong)param_1,puVar7,(longlong *)&local_48,(ulonglong)param_4);
      FUN_14001b6b8((longlong)param_1,puVar7,(longlong *)&local_48,param_4);
      pvVar2 = local_48;
      if ((int)local_40 == 0x60) {
        uVar13 = 0;
        uVar8 = 0;
        cVar1 = *param_3;
        pcVar9 = pcVar6;
        while (cVar1 != '\0') {
          if ((param_3[uVar8] == '%') &&
             (uVar11 = (ulonglong)((int)uVar8 + 1), param_3[uVar11] == 's')) {
            lVar5 = uVar13 * 8;
            uVar13 = (ulonglong)((int)uVar13 + 1);
            for (pcVar10 = *(char **)((longlong)local_48 + lVar5); *pcVar10 != '\0';
                pcVar10 = pcVar10 + 1) {
              *pcVar9 = *pcVar10;
              pcVar9 = pcVar9 + 1;
            }
          }
          else {
            *pcVar9 = param_3[uVar8];
            pcVar9 = pcVar9 + 1;
            uVar11 = uVar8;
          }
          uVar8 = (ulonglong)((int)uVar11 + 1);
          cVar1 = param_3[uVar8];
        }
        *pcVar9 = '\0';
        uVar8 = FUN_140024d20(pcVar6);
        local_res20 = (undefined8 *)((ulonglong)local_res20 & 0xffffffff00000000);
        iVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 & 0xffffffff,pcVar6,&local_res20);
        if (iVar3 == 0) {
          uVar12 = 0;
          if ((int)local_res20 == (int)uVar8) {
            uVar12 = 1;
          }
        }
      }
      FUN_140024260(pcVar6);
      FUN_140024260(pvVar2);
    }
    FUN_140024260(puVar4);
  }
  return uVar12;
}

