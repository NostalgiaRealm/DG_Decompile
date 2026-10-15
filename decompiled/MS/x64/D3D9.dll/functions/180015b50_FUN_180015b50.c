/*
 * FUN_180015b50 at 180015b50
 * undefined __fastcall FUN_180015b50(void * param_1, HICON param_2)
 * Address ranges: 180015b50-180015c99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015b50(void *param_1,HICON param_2)

{
  HBITMAP h;
  longlong lVar1;
  char cVar2;
  char local_res8 [8];
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  uint local_8c;
  longlong local_80;
  ICONINFO local_78;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  longlong local_40;
  uint local_38;
  longlong local_30;
  uint local_28;
  
  if (*(longlong *)((longlong)param_1 + 0x118) == 0) {
    if (param_2 == (HICON)0x0) {
      local_58 = 0;
      local_50 = 0;
      local_48 = 1;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      (**(code **)(**(longlong **)((longlong)param_1 + 0x100) + 0x58))
                (*(longlong **)((longlong)param_1 + 0x100),&local_58);
    }
    else {
      local_res8[0] = '\0';
      h = FUN_180030df8(param_1,param_2,&local_78,local_res8);
      if (h != (HBITMAP)0x0) {
        GetObjectW(h,0x20,local_98);
        if (local_res8[0] == '\0') {
          lVar1 = 0;
        }
        else {
          lVar1 = (local_94 * 4) / 2 + local_80;
        }
        cVar2 = local_res8[0];
        local_48 = FUN_180015f54((longlong)param_1);
        local_58 = CONCAT44(local_90,local_94 / 2);
        local_28 = -(uint)(cVar2 != '\0') & local_8c;
        local_38 = local_8c;
        local_40 = local_80;
        local_30 = lVar1;
        (**(code **)(**(longlong **)((longlong)param_1 + 0x100) + 0x58))
                  (*(longlong **)((longlong)param_1 + 0x100),&local_58);
        DeleteObject(h);
      }
    }
  }
  return;
}

