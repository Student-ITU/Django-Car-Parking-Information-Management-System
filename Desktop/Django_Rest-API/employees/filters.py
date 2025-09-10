import django_filters
from .models import Employee


class EmployeeFilter (django_filters.FilterSet):
    # FilterSet is ke paas sare functionalities ho ge filters ko handle krne ke lie
    designation = django_filters.CharFilter(field_name='designation', lookup_expr='iexact') # designation name proper hona chaye jo models me tha
    # Is me designation is ko de ke yaha pe tum ne kaam krna and lookup kia jis ke waja se chote letters se bhe filter ho jaye ga
    
    emp_name = django_filters.CharFilter(field_name='emp_name', lookup_expr = 'icontains') # emp_name proper hona chaye jo models me tha
    
    
    id = django_filters.RangeFilter(field_name = 'id')
    # emp_id = django_filters.RangeFilter(field_name = 'emp_id')
    
    class Meta:
        model = Employee
        fields = ['designation', 'emp_name', 'id']